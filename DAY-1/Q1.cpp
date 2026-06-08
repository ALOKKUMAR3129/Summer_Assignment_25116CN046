//program to print sum of first n natural numbers
#include <iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout << "Enter Number n: ";
    cin >> n;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    cout << "Sum of First = " << n <<" Natural Numbers = " << sum;
    return 0;
}