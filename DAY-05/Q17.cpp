//Write a program to Check perfect number.
#include <iostream>
using namespace std;
int main(){
    int sum=0,i,n;
    cout << "Enter Number : ";
    cin >> n;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout << "The Given Number is a Perfect Number";
    }
    else{
        cout << "The Given Number is Not a Perfect Number";
    }
    
    return 0;

}