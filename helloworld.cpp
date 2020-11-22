#include<iostream> //contain information that is necessary
/*                 //Long comment
This is first comment
*/

using namespace std; //what use to compiler
int main()           //where program execution begins. ()는 function
{                    //Blocks
    cout<<"Hello World! \n"; //Semicolons = Enter와 같다. 즉, 문장의 끝을 의미. cout은 console out으로 python에서 print와 동일
    return 0;        //terminates main()function, function에는 항상 return 값이 존재한다.
}

// 이후 터미널창에서 c++ 경로/helloworld.cpp(파일명) 작성 => compile and linking
// 지정된 경로에 a.out이라는 실행파일이 생성됨
// 다시 터미널창에서 ./a.out 작성 => execute, 터미널창에 위에 작성한 코드 Hello World!가 나타남!

