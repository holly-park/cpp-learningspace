#include<iostream> //contain information that is necessary

using namespace std; //what use to compiler

/*
#define identifier value //Preprocessor
const type variable = value; //The const Keyword
*/

//#define LENGTH 10 // define뒤에는 usually CAPITALS로 작성, LENGTH 10은 LENGTH=10을 의미
#define NEWLINE '\n'
int main(){
    const int WIDTH = 5; //const는 상수를 의미, 이 값은 고정된 값이다.
    int LENGTH = 20; //Error - expression must be first modifialbe lvalue, 에러 원인은 10번 라인에 이미 LENGTH를 선언해줬기 때문
    //WIDTH = 10; //Error - expression must be first modifialbe lvalue, 에러 원인은 13번 라인에 이미 WIDTH값을 선언해줬기 때문
    int area;
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}