//Write a program to Create menu-driven array operations system.
#include <iostream>
using namespace std;
int main(){
    int i, choice, pos, value, found;
    int n = 5;
    int max_size = 10; 
    int a[10] = {10, 20, 30, 40, 50};
    cout << "--- Array Operations Menu ---\n";
    cout << "1. Display Array Elements\n";
    cout << "2. Insert Element at Position\n";
    cout << "3. Delete Element from Position\n";
    cout << "4. Search Element by Value\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    if(choice == 1){
        cout << "\nArray elements: ";
        for(i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << "\nCurrent total count: " << n << "\n";
    }
    else if(choice == 2){
        if(n >= max_size){
            cout << "\nError: Array is full! Cannot insert.\n";
        }
        else{
            cout << "\nEnter position to insert (1 to " << n + 1 << "): ";
            cin >> pos;
            
            int index = pos - 1;

            if(index >= 0 && index <= n){
                cout << "Enter value to insert: ";
                cin >> value;

                for(i = n - 1; i >= index; i--){
                    a[i + 1] = a[i];
                }
                
                a[index] = value; 
                n++; 
                
                cout << "Element inserted successfully!\nNew array: ";
                for(i = 0; i < n; i++) cout << a[i] << " ";
                cout << "\n";
            }
            else{
                cout << "Invalid position target!\n";
            }
        }
    }
    else if(choice == 3){
        if(n <= 0){
            cout << "\nError: Array is empty! Nothing to delete.\n";
        }
        else{
            cout << "\nEnter position to delete (1 to " << n << "): ";
            cin >> pos;
            
            int index = pos - 1;

            if(index >= 0 && index < n){
                for(i = index; i < n - 1; i++){
                    a[i] = a[i + 1];
                }
                
                n--; 
                
                cout << "Element deleted successfully!\nNew array: ";
                for(i = 0; i < n; i++) cout << a[i] << " ";
                cout << "\n";
            }
            else{
                cout << "Invalid position target!\n";
            }
        }
    }
    else if(choice == 4){
        cout << "\nEnter value to search: ";
        cin >> value;
        
        found = 0;
        for(i = 0; i < n; i++){
            if(a[i] == value){
                cout << "Value " << value << " found at position: " << i + 1 << "\n";
                found = 1;
                break; 
            }
        }
        if(found == 0){
            cout << "Value not found inside the array.\n";
        }
    }
    else{
        cout << "\nInvalid choice selection!\n";
    }
    return 0;
}