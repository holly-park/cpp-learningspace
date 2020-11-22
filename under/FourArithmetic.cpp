#include <iostream>
using namespace std;

namespace arithmetic{
    int addition(int a,int b){
    int sum;
    sum = a + b;
    cout << "Addition Reuslt : " << sum << endl;
    };

    int subtraction(int a, int b){
    int sub;
    sub = a - b;
    cout << "Subtraction Reuslt : " << sub << endl;
    return 0;
    };

    int multiplication(int a, int b){
    int mul;
    mul = a * b;
    cout << "Multiplication Reuslt : " << mul << endl;
    return 0;
    };

    int division(int a, int b){
    int div;
    div = a / b;
    cout << "Division Reuslt : " << div << endl;
    return 0;
    };
}