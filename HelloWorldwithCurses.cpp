#include <curses.h>
int main(){
    WINDOW *w;
    w = initscr();
    curs_set(0); //visible cursor

    //start main
    printw("Hello Ncurse!");
    getch(); //wait keyboard

    //end main
    endwin();
    return 0;
}

/*
자주 사용하지않는 비주류 라이브러리를 사용할 때 vscode에서 디버깅이 안되는데 이때는 아래와 같이 진행하면 된다.
.vscode라는 폴더 내에 launch.json, settings.json, tasks.json 총 3가지 json파일이 있다.
tasks.json은 compile되는 파일로 보면되고 launch.json은 실행시켜주는 파일로 보면된다.

1. tasks.json파일에 들어가서 "args":[...,"-l", "curses", ... ] 추가하기

2. launch.json파일에 들어가서 "preLaunchTask": "C/C++: g++ build active file" 이 구문을 주석처리하기

main()이 들어있는 파일에 들어가서 breakpoint를 걸어주고
ctrl+shift+B(run build task)실시 후 f5를 눌러 디버깅 해주기!
*/