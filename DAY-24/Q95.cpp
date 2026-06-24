//Write a program to Find longest word.
#include <iostream>
using namespace std;
int main(){
    int i, word_start = 0, current_len = 0, max_len = 0, longest_start = 0;
    string str;
    
    cout << "enter full sentence : ";
    getline(cin, str);

    for(i=0; ; i++){
        if(str[i] == ' ' || str[i] == '\0'){
            if(current_len > max_len){
                max_len = current_len;
                longest_start = word_start; 
            }
            
            current_len = 0;
            word_start = i + 1; 
        }
        else {
            current_len++;
        }

        if(str[i] == '\0'){
            break;
        }
    }
    
    cout << "longest word : ";
    for(i = longest_start; i < longest_start + max_len; i++){
        cout << str[i];
    }
    cout << "\n";
    cout << "length of longest word : " << max_len << "\n";
    return 0;
}