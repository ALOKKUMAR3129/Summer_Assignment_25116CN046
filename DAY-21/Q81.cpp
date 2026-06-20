//Write a program to Find string length without strlen().
#include <iostream>
using namespace std;
int main(){ 
    int i,length=0;
    string str;
    cout << "enter full string : ";
    getline(cin, str); 
    for(i=0; str[i] != '\0'; i++){
        length++;
    }
    cout << "length of string : " << length << "\n";
    return 0;
}