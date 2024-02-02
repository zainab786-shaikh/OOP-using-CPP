#include<iostream>

using namespace std;
class Swapp{
    public:
    void swap(int a , int b){
        int temp = a;
        a=b;
        b=temp;
        cout << "After Swapping: \nInteger Swap:"<<a<<"\t"<<b;
    }
    void swap(double a,double b){
        double temp = a;
        a=b;
        b=temp;
        cout << "After Swapping: \nFloat Swap:"<<a<<"\t"<<b;
    }
};
int main(){
    Swapp s;
    s.swap(10,20);
    s.swap(10.2,20.2);
    
}