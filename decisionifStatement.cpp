#include<iostream>

using namespace std;

int if_test();

int main(){
    int i = if_test();
    return 0;
}

int if_test(){
    int first = 100;
    if(first == 10){cout << "Value of first is 10" << endl;}
    else if(first == 30){cout << "Value of first is 30" << endl;}
    else{cout << "Value of first is not matching" << endl;}
    cout << "Exact value of first is : " << first << endl;
    return 0;
}