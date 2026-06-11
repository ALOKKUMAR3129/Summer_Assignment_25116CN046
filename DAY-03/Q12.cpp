//Write a program to Find LCM of two numbers.
#include <iostream>
using namespace std;
int main(){
    int num1,num2,x,y,temp=0,LCM=1,GCD;
    cout << "Enter 1st Number = ";
    cin >> num1;
    cout << "Enter 2nd Number = ";
    cin >> num2;
    x=num1;
    y=num2;
    while(y!=0){
        temp=y;
        y=x%y;
        x=temp;
    }
    GCD=x;
    //to find lcm
    LCM=(num1*num2)/GCD;
    cout << "Lcm of the numbers : " << LCM;
    return 0;
}