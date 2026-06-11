//Write a program to Check Armstrong number. 
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i,c=0,n,temp,rem,sum=0;
    cout << "Enter number = ";
    cin >> n;
    temp=n;
    while(temp!=0){
        c=c+1;
        temp=temp/10;
    }
    i=n;
    while(i!=0){
        rem=i%10;
        sum=sum+round(pow(rem,c));
        i=i/10;
    } 
    if(sum==n){
        cout << "The given number is an Armstrong number";
    }
    else{
        cout << "The given number is not an Armstrong number";
    }
    return 0;
}