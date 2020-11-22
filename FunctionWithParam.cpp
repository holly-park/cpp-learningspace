#include<iostream>

using namespace std;

#include "MaxParam.cpp"
extern int max(int, int); // function declaration

int main(){
    int first, second;
    cout << "Input first : ";
    cin >> first;
    cout << "Input second : ";
    cin >> second;
    // result = max(first, second);
    // cout << "Max value is : " << result << endl;
    cout << "Max value is : " << max(second, first) <<endl;
    return 0;
}