//Write a program to Check strong number.
#include <iostream>
using namespace std;
int main(){
    int i,n,sum=0,LD,temp=0;
    cout << "Enter Number : ";
    cin >> n;
    temp=n;
    while(temp!=0){
        int fact=1;
        LD=temp%10;
        for(i=LD;i>=1;i--){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n){
        cout << "The Given Number is a Strong Number";
    }
    else{
        cout << "The Given Number is Not a Strong Number";
    }
    return 0;
}