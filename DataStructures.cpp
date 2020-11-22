#include <iostream>
#include <string.h>
using namespace std;

struct Book{
    char title[50], author[50];
    string subject;
    int book_id;
};

struct Book2{
    char title[50], author[50];
    string subject;
    int book_id;
};

struct Books{
    struct Book BookList[5]; string category;
    void print_booklist(){
        for(int i=0; i<5; i++){
            cout << i << "." << BookList[i].title << endl;
        }
    };
};

enum categories{COMPUTERS, ARTS, BUSINESS};

void printBook(struct Book *book); //printBook 선언, null타입 printBook(변수이름)(struct Book *book)(변수:struct과 포인터를 같이 선언);

int main(){
    struct Book Book1; //Declare Book1 of type Book
    strcpy(Book1.title, "Learn C++ Programming");
    Book1.subject = "C++ Programming";
    strcpy(Book1.author, "Chand Miyan");
    Book1.book_id = 6495407;

    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;

    printBook(&Book1); 
    cout << "Book 1 subject : " << Book1.subject << endl;
    

    struct Book2 Book2;
    strcpy(Book2.title, "Learn C++ Programming");
    Book2.subject = "Python Programming";
    strcpy(Book2.author, "Tim Cook");
    Book2.book_id = 7777;

    cout << "Book 2 title : " << Book2.title << endl;
    cout << "Book 2 author : " << Book2.author << endl;
    cout << "Book 2 subject : " << Book2.subject << endl;
    cout << "Book 2 id : " << Book2.book_id << endl;

    struct Books BestSell; //Declare Books of type Book
    BestSell.category = categories::COMPUTERS;
    strcpy(BestSell.BookList[1].title, "Telecom Billing");
    strcpy(BestSell.BookList[1].author, "Yakit Singha"); // Line21에 출력을 입력하지 않아서 임의로 쓰레기 값이 출력되어 나옴
    BestSell.print_booklist();

    return 0;
}

void printBook(struct Book *book){
    cout << "printBook subject : " << book->subject << endl;
    book->subject = "Change subject in function";
}