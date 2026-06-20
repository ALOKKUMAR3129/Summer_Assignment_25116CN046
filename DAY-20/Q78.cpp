//Write a program to Check symmetric matrix.
#include <iostream>
using namespace std;
int main() {
    int r, c;

    cout << "Enter rows and columns for the matrix = ";
    cin >> r >> c;
    if (r != c) {
        cout << "The matrix is not square, so it cannot be symmetric." << endl;
        return 0;
    }
    int matrix[10][10];
    bool isSymmetric = true;
    cout << "\nEnter elements of the matrix:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break; 
            }
        }
        if (!isSymmetric) break; 
    }
    if (isSymmetric) {
        cout << "\nThe matrix is Symmetric." << endl;
    } else {
        cout << "\nThe matrix is NOT Symmetric." << endl;
    }
    return 0;
}