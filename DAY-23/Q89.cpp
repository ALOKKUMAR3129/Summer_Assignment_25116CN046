//Write a program to Find first non-repeating character.
#include <iostream>
using namespace std;
int main(){
    int i,j,is_repeating;
    string str;
    
    cout << "enter full string : ";
    getline(cin, str); 
 
    for(i=0; str[i] != '\0'; i++){
        is_repeating = 0; 
        if(str[i] == ' '){
            continue;
        }

        
        for(j=0; str[j] != '\0'; j++){
            if(str[i] == str[j] && i != j){
                is_repeating = 1; 
                break;    
            }
        }
        if(is_repeating == 0){
            cout << "first non-repeating character : " << str[i] << "\n";
            return 0; 
        }
    }

    cout << "no non-repeating character found\n";
    return 0;
}