//Write a program to Check string rotation.
#include <iostream>
using namespace std;
int main(){
    int i, j, len1 = 0, len2 = 0, found = 0;
    string str1, str2, temp;
    
    cout << "enter first string : ";
    getline(cin, str1);
    cout << "enter second string : ";
    getline(cin, str2);

    for(i=0; str1[i] != '\0'; i++){
        len1++;
    }
    for(i=0; str2[i] != '\0'; i++){
        len2++;
    }

    if(len1 != len2){
        cout << "strings are not rotations\n";
        return 0;
    }

    temp = str1 + str1;

    
    for(i=0; i <= (len1 * 2) - len2; i++){
        found = 1;
        
        for(j=0; j < len2; j++){
            if(temp[i + j] != str2[j]){
                found = 0; 
                break;
            }
        }
        
        if(found == 1){
            cout << "strings are rotations of each other\n";
            return 0;
        }
    }

    cout << "strings are not rotations\n";
    return 0;
}