//Write a program to Create employee management system.
#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};
int main(){
    int i;
    int total_employees = 3; 
    Employee e[total_employees]; 
    
    cout << "--- Enter Employee Records ---\n\n";
    //for entering records
    for(i = 0; i < total_employees; i++) {
        cout << "Recording Data for Employee " << i + 1 << "\n";
        
        cout << "Enter Employee ID: ";
        cin >> e[i].id;
        cin.ignore(); 
        
        cout << "Enter Full Name: ";
        getline(cin, e[i].name);
        
        cout << "Enter Salary: $";
        cin >> e[i].salary;
        cout << "\n";
    }
    cout << "--- Displaying All Employee Records ---\n";
    cout << "ID\tName\t\tSalary\n";
    cout << "-------------------------------------\n";
    for(i = 0; i < total_employees; i++) {
        cout << e[i].id << "\t" << e[i].name << "\t\t$" << e[i].salary << "\n";
    }
    return 0;
}