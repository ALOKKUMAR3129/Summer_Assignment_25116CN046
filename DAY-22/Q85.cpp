//Write a program to Check palindrome string.
#include <iostream>
using namespace std;
int main(){
    int i,j,length=0,flag=1;
    string str; 
    cout << "enter full string = ";
    getline(cin, str);
    
    for(i=0; str[i] != '\0'; i++){
        length++;
    }
    j = length - 1;
    for(i=0; i<j; i++){
        if(str[i] != str[j]){
            flag = 0;
            break;
        }
        j--;
    } 
    if(flag == 1){
        cout << "string is a palindrome\n";
    }
    else{
        cout << "string is not a palindrome\n";
    }
    return 0;
}