//Write a program to Find nth Fibonacci term. 
#include <iostream>
using namespace std;
int main() {
    int i,x=0,y=1,z,n;
    cout << "Enter nth term = ";
    cin >> n;
    if (n == 1)
        cout << "The nth Fibonacci term = " << x;
    else if (n == 2)
        cout << "The nth Fibonacci term = " << y;
    else {
        for (i = 1; i <= n - 2; i++) {
            z = x + y;
            x = y;
            y = z;
        }
        cout << "The nth Fibonacci term = " << z;
    }
    return 0;
}