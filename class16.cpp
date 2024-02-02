#include<iostream>
using namespace std;
class op{
    int n1;
    int n2;

    public:
    op(){
        cout << "Enter number 1 and number 2:";
        cin>>n1>>n2;
    }
    void operator++(){
        n1 = ++n1;
    }
    void operator--(){
        n2= --n2;
    }
    void display(){
        cout<<"Num1: "<<n1<<endl<<"num2: "<<n2;
    }
};
int main(){
    op o;
    ++o;
    --o;
    o.display();
}