//Write a program to Binary search.
#include <iostream>
using namespace std;

int main() {
    int i, n, target, temp = 0;
    cout << "enter no of elements of array : ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements in SORTED order:\n";
    for(i = 0; i < n; i++) {
        cout << "enter element " << i + 1 << " : ";
        cin >> a[i];
    }
    cout << "Enter the element to search for : ";
    cin >> target;
    
    int low = 0;
    int high = n - 1;
    int mid;
    int found_index = -1; 
    while (low <= high) {
        mid = (low + high) / 2; 
        
        if (a[mid] == target) {
            found_index = mid; 
            break;             
        }
        else if (a[mid] < target) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }   
    if (found_index != -1) {
        cout << "Element found at position : " << found_index + 1 << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }    
    return 0;
}