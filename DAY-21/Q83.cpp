//Write a program to Count vowels and consonants.
#include <iostream>
using namespace std;
int main(){
    int i, vowels=0, consonants=0;
    string str;
    cout << "enter full string : ";
    getline(cin, str);
    for(i=0; str[i] != '\0'; i++){
        char ch = str[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){            
         
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                vowels++;
            }


            else{
                consonants++;
            }
        }
    }
    cout << "number of vowels : " << vowels << "\n";
    cout << "number of consonants : " << consonants << "\n";
    return 0;
}