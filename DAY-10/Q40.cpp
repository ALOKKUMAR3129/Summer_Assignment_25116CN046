/* Write a program to Print character pyramid
      A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA
*/

#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    char ch='A';
    cout << "enter no of rows : ";
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout << " ";
        }
        ch='A';
        for(j=1;j<=i;j++){
            cout << ch;
            ch++;
        }
        ch=ch-2;
        for(j = i - 1; j >= 1; j--){
            cout << ch;
            ch--;
        }
        cout << "\n";
    }
    return 0;
}