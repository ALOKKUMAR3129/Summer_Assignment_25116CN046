//Write a program to Compress a string.
#include <iostream>
using namespace std;
int main(){
    int i,count;
    string str;
    
    cout << "enter full string : ";
    getline(cin, str);

    cout << "compressed string : ";
    for(i=0; str[i] != '\0'; i++){
        count = 1; 
        while(str[i] == str[i+1] && str[i+1] != '\0'){
            count++;
            i++;
        }
        
        cout << str[i] << count;
    }
    cout << "\n";
    return 0;
}