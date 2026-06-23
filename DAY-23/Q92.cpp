//Write a program to Find maximum occurring character.
#include <iostream>
using namespace std;
int main(){
    int i,j,count,max_count=0;
    string str;
    char max_char;
    
    cout << "enter full string : ";
    getline(cin, str);

    for(i=0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            continue; 
        }
        
        count = 0;
        for(j=0; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                count++;
            }
        }

        if(count > max_count){
            max_count = count;
            max_char = str[i];
        }
    }
    
    if(max_count > 0){
        cout << "maximum occurring character : " << max_char << " (appears " << max_count << " times)\n";
    }
    else{
        cout << "no characters found\n";
    }
}