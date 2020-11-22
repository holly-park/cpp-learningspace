#include<iostream>

using namespace std;

int forinput(); int whileinput();

int main(){
    int x = forinput();
    int y = whileinput();
    return 0;
}

int forinput(){
    int first;
    int second;
    cout << "Input first : ";
    cin >> first;
    cout << "Input second : ";
    cin >> second;
    for(first; first < second; first = first + 1 ){
        cout << first << endl;
        }
}

int whileinput(){
    int first;
    int second;
    cout << "Input first : ";
    cin >> first;
    cout << "Input second : ";
    cin >> second;
    while(first<second){
        cout << first << endl;
        ++first;
    }
}