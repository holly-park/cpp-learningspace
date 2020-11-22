#include<iostream> //contain information that is necessary

using namespace std; //what use to compiler

int main(){
    int first = 21, second = 10, result;
    result = first % second;
    cout << "first % second of result is : " << result << endl; //1
    result = first++; //result=21+1로 22이나 출력(cout)이 우선 적용되어 21로 보여짐  //result = first; first = first + 1, 출력(cout)이 우선 적용
    cout << "first ++ of result is : " << result << endl; //21
    result = first--; //result=22-1로 21이나 출력(cout)이 우선적용되어 앞선 결과값 22가 출력  //result = first; first = first - 1
    cout << "first -- of result is : " << result << endl; //22
    result = ++first; //result=21로                                     //result = 1 + first
    cout << "++ first of result is : " << result << endl;  //22

    first = 21;
    result -= first;                                      //result = result - first
    cout << "-= Operator, Value of result : " << result << endl; //1
    result*= first;                                       //result = result * first
    cout << "*= Operator, Value of result : " << result << endl; //21
    result /= first;                                      //result = result / first
    cout << "/= Operator, Value of result : " << result << endl; //1
    return 0;
}

/*
a++는 후위연산자, ++a는 전치연산자, a++= a+1, a--= a-1
ex) a=1, a++= 1; => a=1
    a=2; 즉, a++는 한 라인이 끝나고 +1이 적용되어 값이 적용된다. 그래서 현재 줄의 a 값이 2가 된다.

ex) a=2, --a= 1; => a=1
    a=1; 즉, --a는 한 라인에 바로 -1이 적용되어 값이 그대로 적용.
*/
