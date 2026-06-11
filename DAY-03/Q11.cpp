//Write a program to Find GCD of two numbers.
#include <iostream>
using namespace std;
int main(){
    int X,Y,temp;
    cout << "Enter X : ";
    cin >> X;
    cout << "Enter Y : ";
    cin >> Y;
    while(Y!=0){
        temp=Y;
        Y=X%Y;
        X=temp;
    }
    cout << "GCD of Two Numbers is " << X;
    return 0;
}