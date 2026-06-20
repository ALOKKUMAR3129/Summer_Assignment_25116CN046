//Write a program to Find row-wise sum
#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns for the matrix = ";
    cin >> r >> c;
    int matrix[10][10];
    cout << "\nEnter elements of the matrix :- " << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }
    cout << "\nOutput Row-wise Sum:" << endl;
    for (int i = 0; i < r; ++i) {
        int rowSum = 0; 
        for (int j = 0; j < c; ++j) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
    }
    return 0;
}