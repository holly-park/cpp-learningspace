#include<iostream>

using namespace std;

int max(int num_first, int num_second){ //function definition
    int result;
    if(num_first > num_second) result = num_first;
    else result = num_second;
    return result;
}