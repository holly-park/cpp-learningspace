#include<iostream>

using namespace std;

//int funcInside(); //function declaration, 함수 선언만, 함수를 선언을 해두면 컴퓨터가 어떻게든 해당 함수를 찾을려고 한다.
                  //함수 선언을 하기 싫으면 함수의 구성을 main함수 앞에 작성을 하면 똑같이 compile된다.

int funcInside() { //function definiton, 함수의 구성
    cout << "int funcInside( )" << endl;
    return 8; // return 값이 상수이므로, function name 앞에 int가 붙음
}

//FunctionOther.cpp 파일 내에서 만든 함수
#include "FunctionOther.cpp"
extern int funcOutside(); // possible remove keyword 'extern'
int i = 5;

int main(){
    int i = funcInside(); // function call, 어떤 함수를 호출하기 전에는 항상 구성이 된 함수가(선언만 되어 있으면 실행 오류 남!) 먼저 compile되어야 한다. 
    int i = funcOutside(); // FunctionOther.cpp에서 만든 함수
    cout << "return value : " << i << endl;
    cout << "Scope resolution operator : " << ::i << endl;
    return 0;
}

/* 
main{}함수는 항상 존재해야 프로그램 실행이 가능하다.
main함수 내에 또 다른 함수를 호출하여 사용하는 방법에는 2가지가 있다.
Import를 해오던가, main함수 전에 호출할 함수를 먼저 작성을 하던가
Compile은 Top-Down 방식으로 진행된다는 점을 기억하자!
*/