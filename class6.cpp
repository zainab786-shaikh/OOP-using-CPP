#include<iostream>
using namespace std;
class Distance{
    int meters;
    public:
        void getdata(){
            cout << "Enter distance in meters:";
            cin >> meters;
        }
        friend void display(Distance a, Distance b){
            int sum;
            a.getdata();
            b.getdata();
            sum = a.meters + b.meters;
            cout << "Sum: "<<sum;
        }
};
int main(){
    Distance d1 , d2;
    display(d1,d2);
}