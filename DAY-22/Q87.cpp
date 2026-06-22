//Write a program to Character frequency.
#include <iostream>
using namespace std;
int main(){
    int i,j,count;
    string str;    
    cout << "enter full string = ";
    getline(cin, str);    
    cout << "\ncharacter frequencies:\n";
    for(i=0; str[i] != '\0'; i++){
        if(str[i] == ' ' || str[i] == '\0'){
            continue;
        }        
        count = 1;
        for(j=i+1; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                count++;
                str[j] = '\0';
            }
        }      
        cout << str[i] << " appears " << count << " times\n";
    }
    return 0;
}