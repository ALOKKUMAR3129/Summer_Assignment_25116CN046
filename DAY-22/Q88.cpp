//Write a program to Remove spaces from string.
#include <iostream>
using namespace std;
int main(){
    int i;
    string str;
    string result = "";
    cout << "enter full string = ";
    getline(cin, str);
    for(i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            result = result + str[i];
        }
    }    
    cout << "string without spaces : " << result << "\n";
    return 0;
}