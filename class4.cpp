#include<iostream>
using namespace std;
class City{
    char name[10];
    int population;

    public:
        void getdata(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter population: ";
            cin >> population;
        }
        void display(){
            cout << "Name: "<<name << "\t" << "Population: "<<population;
        }
};
int main(){
    City c[10];
    int i;
    for(i=0;i<10;i++){
        c[i].getdata();
    }
    for(i=0;i<10;i++){
        c[i].display();
    }
}