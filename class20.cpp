#include<iostream>
using namespace std;
class Area{
    public:
    void area(int lenght , int width){
        cout << "Area of rectangle: "<<lenght * width;
    }
    void area(double length , double breadth){
        cout << "Area of triangle: "<<0.5*length*breadth;
    }
    void area(double side){
        cout << "Area of square: "<<side * side;
    }
};
int main(){
    Area a;
    int a=10,b=20;
    double x = 3.3,y=4.3;
    a.area(a,b);
    a.area(x,y);
    a.area(2.0);
    
}