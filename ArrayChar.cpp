#include <iostream>
using namespace std;

int main(){
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "Greeting message : " << greeting << endl;
    char wouldwithoutnull[5] = {'W', 'o', 'r', 'l', 'd'};
    cout << "World without null message : " << wouldwithoutnull << endl;

    short count = 0;
    while (greeting[count]!= NULL){
        cout << "with null["<< count <<"] : " << greeting[count] << endl;
        ++count;
    }
    return 0;
}