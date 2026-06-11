// Write a program to print Armstrong numbers in a given range
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int start, end;
    cout << "Enter starting number : ";
    cin >> start;
    cout << "Enter ending number : ";
    cin >> end;
    cout << "Armstrong numbers are : ";
    for (int num = start; num <= end; num++)
    {
        int digits = 0;
        int temp = num;
        int sum = 0;
        while (temp != 0)
        {
            digits++;
            temp = temp / 10;
        }
        temp = num;
        while (temp != 0)
        {
            int digit = temp % 10;
            sum = sum + pow(digit, digits);
            temp = temp / 10;
        }
        if (sum == num)
        {
            cout << num << " ";
        }
    }
    return 0;
}