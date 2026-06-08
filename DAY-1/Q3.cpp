//Write a program to Find factorial of a number. 
#include <iostream>
using namespace std;
int main(){
    int i,fact=1,n;
    cout << "Enter Number : ";
    cin >> n;
    for(i=n;i>1;i--){
        fact=fact*i;
    }
    cout << "Factorial of Number " << n << " = " << fact;
    return 0;
}
