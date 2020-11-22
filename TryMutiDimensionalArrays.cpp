#include <iostream>
using namespace std;

int main(){
    int row, column; //행과 열은 숫자이기 때문에 int로 선언
    char char_row, char_column; //행과 열에 들어갈 내용은 문자를 넣고자 하기 때문에 char로 선언
    cout << "Enter Row and Column: ";
    cin >> row >> column; // row 먼저 입력 후 column 입력
    cout << "Display Row : ";
    cin >> char_row; //문자형태의 row 값 입력
    cout << "Display Column : ";
    cin >> char_column; //문자형태의 column 값 입력

    // 틀(배열) 만들기 *************************************************************************************************
    // make row
    char **pptr = new char *[row]; //타입 **포인터의 포인터이름 = new 타입 *포인터[행], []은 배열의 형태로 만든다는 의미

    /*new 연산자: 첫 번째 타입은 데이터에 맞는 포인터를 선언하기 위해, 두 번째 타입은 메모리의
    종류를 지정하기 위해 사용됨.
    new 연산자는 자유 기억 공안(free store)이라고 불리는 메모리공간에 객체를 위한 메모리를 할당 받음.
    */

    // make column
    for(int i = 0; i < row; i++){
        pptr[i] = new char[column];
    }
    // **************************************************************************************************************

    // first row
    for(int j = 0; j < column; j++){
        pptr[0][j] = char_row;
    }
    
    // body row
    for(int i = 1; i < row-1; i++)
        for(int j = 0; j < column; j++){
            if(j == 0)
            {
                pptr[i][j] = char_row; // 0번째 열
            }
            else if( column / 2 == j )
            {
                pptr[i][j] = char_column; // 정가운데 열
            }
            else if( j == column - 1)
            {
                pptr[i][j] = char_row; //마지역 열
            }
            else
            {
                pptr[i][j] = ' ';
            }      
    }

    // last row
    for(int j = 0; j < column; j++){
        pptr[row-1][j] = char_row; //row가 0번째 부터 시작하기 때문에 -1을 해준다.
    }

    // to display
    for(int k = 0; k < row; k++)
    {
        for(int l = 0; l < column; l++)
        {
            cout << pptr[k][l]<< "   " ; //행 [k] 입력 후 열[l] 입력되고 한 줄로 출력됨 
        }
        cout << endl; // 위 행이 생성되고 다음 행으로 만들기 위해 endl을 여기서 해줘야 함.
    }

    delete[]pptr; //new 연산자를 배열로 만들었기 때문에 []배열을 삭제, 만약 new 연산자를 int 4로 만들었으면 delete... 하면 됨.
    return 0;
}