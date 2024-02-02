#include<iostream>
using namespace std;
class Swap{
    int a;
    int b;
    int temp;

    public:
    void getdata(){
        cout << "Enter values of a and b:";
        cin >> a >> b;
    }
    friend void display(Swap s){
        s.getdata();
        s.temp = s.a;
        s.a = s.b;
        s.b = s.temp;
        cout << "Values after swapping: "<<s.a<<"\t"<<s.b;

    }
};
int main(){
    Swap s;
    display(s);
}