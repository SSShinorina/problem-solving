#include <iostream>
#include <stdlib.h>
#include<cmath>
using namespace std;
int main(){
    int i,no,first = 0, second = 1, next;
    cout << "How many terms you want to use?"<<endl;
    cin >> no;
    cout << "The Fibonacci series are: ";
    for (i=0;i<no;i++){
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    cout << "\n";
    return 0;
}
