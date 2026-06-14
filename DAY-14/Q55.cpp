//Write a program to Second largest element
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    int secondLargest = arr[1];
    if (secondLargest > largest) {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i]; 
        } 
        else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    cout << "The second largest element is: " << secondLargest << endl;
    return 0;
}