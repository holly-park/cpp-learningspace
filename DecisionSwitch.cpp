#include <iostream>
using namespace std;

int main(){
    char grade = 'D';
    switch(grade){
        case 'B':
        case 'C': cout << "Well done" << endl;
        break;
        default:
        cout << "Invalid grade" << endl;
    }
    return 0;
}