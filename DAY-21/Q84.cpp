//Write a program to Convert lowercase to uppercase.
#include <iostream>
using namespace std;
int main(){
    int i;
    string str;
    
    cout << "enter full string : ";
    getline(cin, str);

    for(i=0; str[i] != '\0'; i++){

        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32; 
        }
    }
    
    cout << "uppercase string : " << str << "\n";
    return 0;
}