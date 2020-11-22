#include <iostream>
using namespace std;

#include <string>
int main(){
    string str1 = "Hello", str2 = "World", str3;
    int len;
    str3 = str1; //copy str1 into str3
    cout << "str3 : " << str3 <<endl;

    str3 = str1 + str2; //concatenates str1 and str2
    cout << "str1 + str2 : " << str3 <<endl;

    len = str3.size(); //total length of str3 after concatenation
    cout << "str3.size() : " << len << endl;
    
    return 0;
}