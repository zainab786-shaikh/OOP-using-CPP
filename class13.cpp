#include<iostream>
using namespace std;
class Book{
    char book_name[20];
    char author[10];
    float price;

    public:
    void getdata(){
        cout <<"Enter book name: ";
        cin >> book_name;
        cout << "Author: ";
        cin >> author;
        cout << "Price: ";
        cin >> price;
    }
    void display(){
        cout << "Book: "<<book_name<<"\tAuthor: "<<author<<"\tPrice: "<<price;
    }
};
int main(){
    Book b,*bk;
    b.getdata();
    bk = &b;
    bk->display();
}