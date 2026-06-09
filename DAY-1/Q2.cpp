//Write a program to Print multiplication table of a given number.
#include <iostream>
using namespace std;
int main(){
    int i,mul,n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Multiplication Table of " << n << " is.."<< "\n";
    for(i=0;i<=10;i++){
        mul=n*i;
        cout << n << " * " << i << " = " << mul << "\n";
    }
    return 0;
    
}