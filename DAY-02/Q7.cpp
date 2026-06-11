//Write a program to Find product of digits.
#include <iostream>
using namespace std;
int main(){
    int i,pro=1,rem,temp,n;
    cout << "Enter Number = ";
    cin >> n;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        pro=pro*rem;
        temp=temp/10;
    }
    cout << "Product of the Digits of Number " << n << " = " << pro;
    return 0;
}