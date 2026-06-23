//Write a program to Find first repeating character.
#include <iostream>
using namespace std;
int main(){
    int i,j,found=0;
    string str;
    
    cout << "enter full string : ";
    getline(cin, str);

    for(i=0; str[i] != '\0'; i++){

        if(str[i] == ' '){
            continue;
        }

        for(j=i+1; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                cout << "first repeating character : " << str[i] << "\n";
                found = 1;
                break; // Break the inner loop
            }
        }

        if(found == 1){
            return 0; 
        }
    }

    cout << "no repeating character found\n";
}