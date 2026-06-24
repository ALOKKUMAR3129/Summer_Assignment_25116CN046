//Write a program to Remove duplicate characters.
#include <iostream>
using namespace std;
int main(){
    int i,j,is_duplicate;
    string str;
    string result = ""; 
    
    cout << "enter full string : ";
    getline(cin, str);

    for(i=0; str[i] != '\0'; i++){
        is_duplicate = 0;
        for(j=0; j<i; j++){
            if(str[i] == str[j]){
                is_duplicate = 1; 
                break;
            }
        }
        
        if(is_duplicate == 0){
            result = result + str[i];
        }
    }
    
    cout << "string after removing duplicates : " << result << "\n";
    return 0;
}