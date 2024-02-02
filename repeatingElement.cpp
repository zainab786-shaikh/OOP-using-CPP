#include<iostream>
using namespace std;
int main(){
    int a[100],n,i,j;
    cout << "Enter the number of array elements:";
    cin >> n;
    cout << "Enter array elements:";
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "Repeated Elements :";
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i] == a[j]){
                cout << a[i]<<"\t";
            }
        }
    }
}