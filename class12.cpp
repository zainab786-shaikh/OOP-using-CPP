#include<iostream>
using namespace std;
class Cricketer{
    public:
    char name[10];
};
class Bowler : virtual public Cricketer{
    public:
    char Bowler_name[20];
};
class Batsman : public virtual Cricketer{
    public:
    char batsman_name[20];
};
class Allrounder:public Bowler , public Batsman{
    public:
    void getdata(){
        cout << "Enter cricketer name: ";
        cin >> name;
        cout << "Enter Bowler name:";
        cin >> Bowler_name;
        cout << "Enter batsman name: ";
        cin >> batsman_name;
    }
    void display(){
        cout << "Name: "<<name << "\nBowler name: "<<Bowler_name<<"\nBatsman name: "<<batsman_name; 
    }
};
int main(){
    Allrounder a;
    a.getdata();
    a.display();
}