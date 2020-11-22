#include <iostream>
using namespace std;

#define max 3

int main(){
    int var[max] = {10, 100, 200}, *ptr_first = var; //array is same pointer

    for (int i = 0; i < max; i++){
        cout << "Array var[" << i << "] = " << var[i] << ", address : " << &var[i] << endl;
        cout << "Pointer var[" << i << "] = " << *ptr_first << ", address : " << ptr_first << endl;
        ++ptr_first;
    }
    
    int *ptr_second;
    
    for (int i = max-1; i>=0; i--){
        ptr_second = &var[i];
        cout << "Array var[" << i << "] = "  << *ptr_second << ", address : " << ptr_second << endl;
    }

    return 0;
}