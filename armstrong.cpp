#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num , n = 0,Og , rem , result = 0;
    cout << "Enter the number:";
    cin >> num;

    Og = num;
    while(num != 0){
        num = num / 10;
        n++;
    }

    num = Og;
    while(num != 0){
        rem = num % 10;
        result = result + pow(rem,n);
        num = num / 10;
    }

    if(result == Og){
        cout << "Number is an armstrong number";
    }else{
        cout << "Number is not an armstrong number";
    }
    return 0;
}