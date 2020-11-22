#include <string>
#include <curses.h>
using namespace std;

#define PLAYER '*'
#define WALL 'W'
#define OPPONENT 'O'
#define E_TRACE ' '

int is_move_okay(int y, int x);

struct Player{
    static const int shape_size_y = 2, shape_size_x = 2; //static은 정적변수, 생성된 스코프(=범위)가 종료된 이후에도 해당 값을 유지하는 변수, 초기화는 한 번만 되며 프로그램 실행 내내 수명이 유지됨 
    void appear(const int &move_y, const int &move_x){
        mvaddstr(move_y, move_x, "@@");
        mvaddstr(move_y + this->shape_size_y -1, move_x, "ll");
    }
};

int main(void){
    WINDOW *w;
    w = initscr();
    curs_set(0);

    keypad(stdscr, TRUE); timeout(30); //control game speed
    int y = LINES-1, x = COLS-COLS, move_x = 0, move_y = 0; //start main
    int ch = 'y'; //define integer for compare with define

    Player player01;
    string ch_var;

    while((ch!='q') && (ch !='Q')){
        mvaddch(++move_y, ++move_x, OPPONENT); //auto moving
        mvaddch(y,x,PLAYER);
        mvaddch(10,5,WALL);
        mvaddch(11,5,OPPONENT);

        player01.appear(y,x);
        ch_var = to_string(player01.shape_size_y) + "," + to_string(player01.shape_size_x);
        mvprintw(20, 30, ch_var.c_str());

        ch = getch();
        switch (ch){
            case KEY_UP: if(is_move_okay(y-1,x)){y = y - 1;};break;
            case KEY_DOWN: if(is_move_okay(y+1,x)){y = y + 1;}; break;
            case KEY_LEFT: if(is_move_okay(y,x-1)){x = x - 1;}; break;
            case KEY_RIGHT: x = x + 1; mvaddch(y,x-1,E_TRACE); break;
        }
    }
    endwin();
    return 0;
}

int is_move_okay(int y, int x){
    int campare_ch;
    campare_ch = mvinch(y,x); //주어진 위치 문자 return
    return ((campare_ch != 'W'));
}