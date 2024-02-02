#include<iostream>
using namespace std;
int main(){
    int a[100],n,smallest , secondSmallest ,i;

    cout << "Enter the number of array elements:";
    cin >> n;
    cout << "Enter the elements:";
    for(i=0;i<n;i++){
        cin >> a[i];
    }

    smallest = a[0];
    for(i=1;i<n;i++){
        if(a[i] < smallest){
            secondSmallest = smallest;
            smallest = a[i];
        }else if(a[i]<secondSmallest && a[i]!= smallest){
            secondSmallest = a[i];
        }
    }
    cout << "Smallest Number:"<<smallest<<endl;
    cout << "Second Smallest Number : "<<secondSmallest;

}