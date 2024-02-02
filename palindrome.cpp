#include<iostream>
using namespace std;
int main(){
    int num , Og , reverse = 0,rem;

    cout << "Enter the num:";
    cin >> num;

    Og = num;
    while(num!=0){
        rem = num% 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if(Og == reverse){
        cout << "Number is Palindrome";
    }else{
        cout << "Numbe is not a Palindrome";
    }
    return 0;
}