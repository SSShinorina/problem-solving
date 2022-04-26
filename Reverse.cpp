
#include <iostream>
#include <stdlib.h>
#include<cmath>
using namespace std;
#define CUBE(x) (x*x*x)

int main(){
    int n,r,rev=0,no,a;
    cout << "Enter positive number: " ;
    cin >> n;
    no=n;
    while (n>0){
        r = n%10;
        rev = rev*10+r;
        n = n/10;

    }
    cout << "Reverse number of [" << no << "] is [" << rev <<"]" << endl;
    return 0;
}
