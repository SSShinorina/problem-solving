#include <iostream>
#include <stdlib.h>
#include<cmath>
using namespace std;

int main(){
    // number of digits
    int n,no,a=0;
    cout << "Enter positive number: ";
    cin >> n;
    no=n;
     while (n>0){
        n=n/10;
        a++;
     }
     cout << "Number of digits in [" << no << "] is: " << a <<endl;
     return 0;
}
