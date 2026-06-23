//Write a program to Check anagram strings.
#include <iostream>
using namespace std;
int main(){
    int i,j,len1=0,len2=0;
    string str1, str2;
    char temp;
    
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
        cout << "strings are not anagrams\n";
        return 0;
    }

    for(i=0; i<len1-1; i++){
        for(j=0; j<len1-i-1; j++){
            if(str1[j] > str1[j+1]){
                temp = str1[j];
                str1[j] = str1[j+1];
                str1[j+1] = temp;
            }
        }
    }

    for(i=0; i<len2-1; i++){
        for(j=0; j<len2-i-1; j++){
            if(str2[j] > str2[j+1]){
                temp = str2[j];
                str2[j] = str2[j+1];
                str2[j+1] = temp;
            }
        }
    }

    for(i=0; i<len1; i++){
        if(str1[i] != str2[i]){
            cout << "strings are not anagrams\n";
            return 0; 
        }
    }

    cout << "strings are anagrams\n";
}