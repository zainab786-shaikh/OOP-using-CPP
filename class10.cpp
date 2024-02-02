#include<iostream>
using namespace std;
class Employee{
    int emp_no;
    char e_name[10];
    char e_designation[20];
};
class Salary:public Employee{
    int basic;
    int HRA;
    int DA;
    int gross_salary;

    public:
        void getdata(){
            cout << "Enter basic salary: ";
            cin >> basic;
            HRA = 0.745*basic;
            DA = 0.3*basic;
            gross_salary = basic+HRA+DA;
        }
        void display(){
            cout << "Gross Salary : "<<gross_salary;
        }
};
int main(){
    Salary s;
    s.getdata();
    s.display();
}