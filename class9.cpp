#include<iostream>
using namespace std;
class Student{
    int roll_no;
    char name[10];

};
class Marks:public Student{
    int m1,m2,m3,total,percentage;

    public:
        void getdata(){
            cout << "Enter marks of three subject: ";
            cin >> m1>>m2>>m3;
            total = m1+m2+m3;
            percentage = total /3; 
        }
        void display(){
            cout << "Marks of three sujects: " <<m1 <<"\t"<<m2<<"\t"<<m3;
            cout << "\n Total: "<<total;
            cout << "\n Percentage: "<<percentage;
        }
};
int main(){
    Marks m;
    m.getdata();
    m.display();
}