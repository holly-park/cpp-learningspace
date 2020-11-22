#include<iostream>

using namespace std;

int loopfor();

int main(){
    int i = loopfor();
    return 0;
}

int loopfor(){
    /*
    int first = 10;
    int first < 20;
    int first = first + 1;
    */
    for (int first = 10; first < 20; first = first + 1){ //위처럼 여러 개의 변수를 한 문장으로 작성한 것
        cout << "Value of first : " << first << endl;
        if(first > 16){ //with break statement
        break;
        }
    cout << "Final value first : " << first << endl;
    }
    return 0;
}