#include <iostream>
using namespace std;

namespace first_space{
    void func(){
        cout << "Inside first_space" << endl;
    }
}

namespace second_space{
    void func(){
        cout << "Inside second_space" << endl;
    }
}

using namespace first_space;

// #include "under/NameSpacesUsingOthers.cpp"
// using namespace third_space;

#include "under/NameSpacesUsingOthers.hpp"
int main(){
    //func(); //namespace가 first_space이고, 그 안에 들어 있는 func()함수 사용, 이거를 사용할 때는 using namespace first_space를 사용할 것이다라고 명시를 해줘야 함.
    second_space::func(); // namespace가 second_space이고, 그 안에 들어 있는 func()함수 사용
    
    third_space::func();
    funcOutside();
    return 0;
}