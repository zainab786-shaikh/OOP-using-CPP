#include<iostream>
using namespace std;
class Staff{
    char name[10];
    float basic_salary;
    float DA;
    float HRA;
    float gross_salary;

    public:
    void getdata(){
        cout << "Enter the name of staff:";
        cin >> name;
        cout << "Enter the basic salary of the staff:";
        cin >> basic_salary;
        DA = 0.745 * basic_salary;
        HRA = 0.3 * basic_salary;
        gross_salary = basic_salary+ DA + HRA;
    }
    void display(){
        cout << "Gross Salary: "<<gross_salary;
    }
};
int main(){
    Staff s;
    s.getdata();
    s.display();

}