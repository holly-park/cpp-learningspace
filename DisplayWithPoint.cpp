#include <string>
#include <curses.h>

int main(){
    WINDOW *w; //Terminal은 The screen(stdscr)이고, terminal위에 가상의 윈도우처럼 올려져 있는게 WINDOW.
    w = initscr(); //무조건 init해야함(초기화)
    curs_set(0); //invisible cursor, curs_set(1);로주면 커서가 보인다. 이 구문을 삭제하면 default값도 커서가 보이는것으로 되어 있는듯

    using namespace std; //start main
    int max_y = LINES-1, max_x = COLS-COLS; //define in curses.h
    /*LINES은 0부터 시작하기 때문에 마지막 줄은 LINES-1이 된다.
    COLS-COLS라는 뜻은 즉, x(COLUMNS)는 항상 '0'으로 만든다는 뜻.
    */
    printw("Start Hello Ncurse!"); //WINDOW에 프린트 하기 위해서는 printw를 사용
    move(3,4); addch('3'); mvaddch(5,4,'5'); //move(y,x); 후 addch('문자/숫자') = mvaddch(y,x,'문자/숫자')
    string str_var = "max_y, max_x : " + to_string(int(LINES)) + "," + to_string(int(COLS));
    mvaddstr(6,4,str_var.c_str());
    mvprintw(max_y/2, COLS/2, "Middle Hello Ncurse!");
    mvaddch(max_y-1, COLS-1, 'E');
    getch(); //end main

    endwin();
    return 0;
}