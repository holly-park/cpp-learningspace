#include <iostream>
#include "FunctionCallValue.cpp"
using namespace std;


extern int sum(int first, int second);

int main(){
    int first, second, third, result;
    cout << "Input First Number : ";
    cin >> first;
    cout << "Input Second Number : ";
    cin >> second;
    cout << "Input Third Number : ";
    cin >> third;
    result = sum(first, second);
    cout << "Total value is : " << result << endl;
    cout << "Total value is : " << sum(second, third) << endl;
    return 0;
}