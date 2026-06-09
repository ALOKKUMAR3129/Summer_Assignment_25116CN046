//Write a program to Find sum of digits of a number.
#include <iostream>
using namespace std;
int main(){
    int i,sum=0,temp,n,rem;
    cout << "Enter Number = ";
    cin >> n;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    cout << "Sum of the Digits of Number " << n << " is " << sum;
    return 0;
}