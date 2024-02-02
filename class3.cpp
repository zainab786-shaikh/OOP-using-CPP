#include<iostream>
using namespace std;
class Employee{
    int emp_id;
    char emp_name[10];
    float emp_salary;

    public:
        void getdata(){
            cout << "Enter employee id: ";
            cin >> emp_id;
            cout << "Enter employee name: ";
            cin >> emp_name;
            cout << "Enter salary: ";
            cin >> emp_salary;
        }
        void display(){
            cout <<"\n Employee details: \n";
            cout << "Employee id: "<<emp_id <<"\n Employee Name: "<<emp_name<<"\nSalary: "<<emp_salary;
        }
        float getsalary(){
            return emp_salary;
        }
};
int main(){
    Employee e[10];
    int n,i;

    cout << "Enter number of employees:";
    cin >> n;
    cout << "Enter employees:";
    for(i=0;i<n;i++){
        e[i].getdata();
    }
    for(i=0;i<n;i++){
        if(e[i].getsalary() > 25000){
            e[i].display();
        }
    }
}