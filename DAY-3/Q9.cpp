//Write a program to Check whether a number is prime.
#include <iostream>
using namespace std;
int main(){
    int i,n,isprime=1,temp=0;
    cout << "Enter Number = ";
    cin >> n;
    temp=n;
    for(i=2;i<n;i++){
        if(temp%i==0){
            isprime=0;
            break;
        }
        else{
            isprime=1;
        }
    }
    if(isprime==1){
        cout << "The Given Number is a Prime Number ";
    }
    else{
        cout << "The Given Number is Not a Nrime Number ";
    }
    return 0;
}