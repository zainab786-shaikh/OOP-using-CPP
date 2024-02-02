#include<iostream>
using namespace std;
class Book{
    char book_name[10];
    char author[10];
    float price;

    public:
        void getdata(){
            cout << "Enter details of the book: \n";
            cout << "Book Name: ";
            cin >> book_name;
            cout << "Auhor:";
            cin >> author;
            cout << "Price:";
            cin >> price;
        }
        void display(){
            cout << "Book Details:";
            cout << "Book Name: "<<book_name <<endl<< "Author :" << author << endl << "Price :" <<price; 
        }
        float getprice(){
            return price;
        }
};
int main(){
    Book b[10];
    int n,i,index;
    float maxPrice = 0;
    cout << "Enter the number of bookS:";
    cin >> n;
    for(i=0;i<n;i++){
        b[i].getdata();
    }
    for(i=0;i<n;i++){
        if(b[i].getprice() > maxPrice ){
            maxPrice = b[i].getprice();
            index = i;
        }
    }
    if(maxPrice != 0){
        cout << "Book Name with maximum price:" \n;
        b[index].display();
    }else{
        cout << "no books entered";
    }


}