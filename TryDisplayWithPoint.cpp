#include <curses.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
    WINDOW *w;
    w = initscr(); //무조건 init해야함
    curs_set(0); //invisible cursor
    
    int max_y = LINES-1, max_x = COLS-COLS; //define in curses.h
    string str_var = to_string(LINES) + to_string(COLS);
    mvaddstr(max_y/2, COLS/2,str_var.c_str());
    mvprintw(max_y/2, COLS/2, "Game Start!");

    getch();

    endwin();
    return 0;
}