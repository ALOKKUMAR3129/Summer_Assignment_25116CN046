//Write a program to Create contact management system.
#include <iostream>
using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

int main(){
    int i, choice;
    string search_name;
    int total_contacts = 3; 
    Contact c[total_contacts];
    c[0] = {"prakhar", "9876543210", "prakhar@email.com"};
    c[1] = {"shivank", "8765432109", "shivank@email.com"};
    c[2] = {"devansh", "7654321098", "devansh@email.com"};

    cout << "--- Welcome to the Contact Management System ---\n";
    cout << "1. Display All Contacts\n";
    cout << "2. Search Contact by Name\n";
    cout << "Enter your choice (1-2): ";
    cin >> choice;
    cin.ignore(); 

    if(choice == 1){
        cout << "\nName\t\tPhone Number\tEmail Address\n";
        cout << "--------------------------------------------------\n";
        for(i = 0; i < total_contacts; i++){
            cout << c[i].name;
            
            if(c[i].name.length() < 8) cout << "\t\t";
            else cout << "\t";
            
            cout << c[i].phone << "\t" << c[i].email << "\n";
        }
    }
    else if(choice == 2){
        cout << "\nEnter name to search: ";
        getline(cin, search_name);
        
        int found = 0;
        for(i = 0; i < total_contacts; i++){
            if(c[i].name == search_name){
                found = 1;
                cout << "\n--- Contact Found ---\n";
                cout << "Name : " << c[i].name << "\n";
                cout << "Phone: " << c[i].phone << "\n";
                cout << "Email: " << c[i].email << "\n";
                break; 
            }
        }
        if(found == 0){
            cout << "\nError: No contact matching '" << search_name << "' was found.\n";
        }
    }
    else {
        cout << "\nInvalid choice selection!\n";
    }
}