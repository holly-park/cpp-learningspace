#include <iostream>
using namespace std;

int main(){
    int x, y = 10, var; // 변수 선언

    if(y < 10){var = 30;} // if문(조건){참인 조건}
    else{var = 40;} //{거짓인 조건}
    cout << "Value of x1 : " << var <<endl;

    x = (y < 10) ? 30 : 40; // 위 if문과 동일만 표현, x라는 변수는 (조건) ? 참인 조건 : 거짓인 조건 으로 표현
    cout << "Value of x2 : " << x << endl;
    return 0;
}