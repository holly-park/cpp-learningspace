#include <iostream>
using namespace std;

int main(){
    int var = 20; // actual variable declaration
    cout << &var << endl; //변수 앞에 &를 붙이면 해당 변수 값의 주소 값이 출력됨

    int *ptr_first; //pointer  variable
    ptr_first = &var; //store address of var in pointer variable
    cout << &ptr_first << endl; //ptr_first의 주소 값 출력

    cout << "var variable : " << var << ", address : " << &var << endl;

    cout << "ptr_first variable : " << ptr_first << ", address : " << &ptr_first << endl;

    cout << "Value of *ptr_first variable : " << *ptr_first << ", address : " << &(*ptr_first);
    return 0;
}