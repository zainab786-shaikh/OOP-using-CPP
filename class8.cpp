#include<iostream>
using namespace std;
class Number{
    int x , y;
    public:

    Number(){
        cout << "Enter the values of x and y";
        cin >> x >> y;
    }
    int add(){
        return (x+y);
    }
    int sub(){
        return (x-y);
    }
    int mul(){
        return (x*y);
    }
    int div(){
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
    n.display();
    
}