//Write a program to Count digits in a number.
#include <iostream>
using namespace std;
int main(){
    int temp=0,count=0,n;
    cout << "Enter Any Number : ";
    cin >> n;
    temp=n;
    while(temp!=0){
        temp=temp/10;
        count=count+1;
    }
    cout << "Number of Digits in " << n << " = " << count;
    return 0;
}