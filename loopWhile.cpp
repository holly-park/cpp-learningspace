#include<iostream>

using namespace std;

int loopwhile();

int main(){
    int i = loopwhile();
    return 0;
}

int loopwhile(){
    int first = 10;
    while(first < 20){
        cout << "Value of first : " << first << endl;
        ++first;
    }
    return 0;
}