//Write a program to Find common characters in strings.
#include <iostream>
using namespace std;
int main(){
    int i,j,k,is_duplicate;
    string str1, str2;    
    cout << "enter first string : ";
    getline(cin, str1);
    cout << "enter second string : ";
    getline(cin, str2);
    cout << "common characters : ";
    for(i=0; str1[i] != '\0'; i++){
        // Skip spaces
        if(str1[i] == ' '){
            continue;
        }
        is_duplicate = 0;
        for(k=0; k<i; k++){
            if(str1[i] == str1[k]){
                is_duplicate = 1;
                break;
            }
        }
        if(is_duplicate == 1){
            continue;
        }
        for(j=0; str2[j] != '\0'; j++){
            if(str1[i] == str2[j]){
                cout << str1[i] << " ";
                str2[j] = '\0'; 
                break;        
            }
        }
    }
    cout << "\n";
    return 0;
}