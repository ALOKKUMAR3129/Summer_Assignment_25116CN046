//Write a program to Check whether a number is palindrome.
#include <iostream>
using namespace std;
int main (){
    int i,rem,sum=0,temp,n;
    cout << "Enter a Number : ";
    cin >> n;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if (sum==n) {
        cout << "The Given  Number is a Palindrome";
    }else {
        cout << "The Given Number is Not a Palindrome";
    }
    return 0;
}