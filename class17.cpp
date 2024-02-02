#include <iostream>
using namespace std;
class Binary{
    int value;

    public:
    Binary(int value){
        this->value = value;
    }
    Binary operator+(Binary other){
        return (value + other.value);
    }
    Binary operator-(Binary other){
       return(value - other.value);
    }
    Binary operator*(Binary other){
        return(value * other.value);
    }
    Binary operator/(Binary other){
        return(value / other.value);
    }
    void diaplay(){
        cout <<"Value:" << value<<endl;
    }
};

int main(){
    Binary b1(10);
    Binary b2(5);
    Binary result1 = b1 + b2;
    result1.diaplay();
    Binary result2 = b1 - b2;
    result2.diaplay();
    Binary result3 = b1 * b2;
    result3.diaplay();
    Binary result4 = b1 / b2;
    result4.diaplay();

}