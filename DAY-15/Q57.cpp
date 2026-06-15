//Write a program to Reverse array.
#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "enter no of elements of array : ";
    cin >> n;
    int a[n];
    int ra[n]={0};
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        ra[i]=a[n-1-i];
    }
    cout << "reversed array : ";
    for(i=0;i<n;i++){
        cout << ra[i] << " ";
    }
    return 0;
}