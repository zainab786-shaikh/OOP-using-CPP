#include<iostream>
using namespace std;
class Birthday{
    int day;
    char month[10];
    int year;

    public:
    void getdata(){
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }
    void display(){
        cout << "Birthday: "<<day<<"-"<<month<<"-"<<year;
    }
};
int main(){
    Birthday b[5], *bk;
    int i;
    for(i=0;i<5;i++){
        bk = &b[i];
        bk->getdata();
    }
    for(i=0;i<5;i++){
        bk = &b[i];
        bk->display();
        cout<<endl;
    }
}