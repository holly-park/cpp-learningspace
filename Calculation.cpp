#include <iostream>
#include "under/FourArithmetic.hpp"
using namespace std;

int input(); 
int addition(int a, int b); 
int subtraction(int a, int b); 
int multiplication(int a, int b); 
int division(int a, int b); 
int output();

int main(){
    int a = input();
    int b = input();
    arithmetic::addition(a,b);
    arithmetic::subtraction(a,b);
    arithmetic::multiplication(a,b);
    arithmetic::division(a,b);
    int c = output();
    return 0;
}

int input(){
    int value;
    cout << "Value : ";
    cin >> value;
    return value;
}

int output(){
    char ch;
    cout << "Do you want to Continue the Calculation? Input Y / N ";
    cin >> ch;
    if(ch == 'N'){cout << "End The Calculation. Good Bye!" << endl;}
    else{main();}
    return 0;
}