#include<iostream>
using namespace std;
class Person{
    public:
    char name[10];
    char gender[10];
    int age;
};
class Employee: public Person{
    public:
    int emp_id;
    char company[10];
    float salary;
};
class Programmer : public Employee{
    int no_of_prog_lang_known;

    public:
        void getdata(){
            cout << "Enter name:";
            cin >> name;
            cout << "Enter gender: ";
            cin >> gender;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter employee id: ";
            cin >> emp_id;
            cout << "Enter company : ";
            cin >> company;
            cout << "Salary : ";
            cin >> salary;
            cout << "Enter prog language known: ";
            cin >> no_of_prog_lang_known;
        }
        void display(){
            cout << "Name: "<<name<<"\tGender: "<<gender<<"\tAge: "<<age<<"\tEmployee id: "<<emp_id<<"\tCompany: "<<company << "\tSalary:"<<salary<<"\tNo of prog lang known : "<<no_of_prog_lang_known;
        }
};
int main(){
    Programmer p;
    p.getdata();
    p.display();
    
}