#include<iostream>
using namespace std;
class Number{
    int x ;
    int y;

    public:
        void getdata(){
            cout << "Enter two numbers:";
            cin >> x>>y;
        }
        inline int add(){
            return (x+y);
        }
        inline int sub(){
            return (x-y);
        }
        inline int mul(){
            return (x*y);
        }
        inline int div(){
            return (x/y);
        }
        void display(){
            cout << "Addition:"<<add();
            cout << "\nSubtraction:"<<sub();
            cout << "\nMultiplication:"<<mul();
            cout << "\nDivision:"<<div();
        }
};
int main(){
    Number n;
    n.getdata();
    n.display();
}