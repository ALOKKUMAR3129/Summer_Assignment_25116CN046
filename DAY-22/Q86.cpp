//Write a program to Count words in a sentence.
#include <iostream>
using namespace std;
int main(){
    int i,words=1;
    string str;
    cout << "enter full sentence : ";
    getline(cin, str);
    for(i=0; str[i] != '\0'; i++){
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0'){
            words++;
        }
    }
    if(str[0] == '\0'){
        words = 0;
    }    
    cout << "total words : " << words << "\n";
    return 0;
}