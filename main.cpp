#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
 {
    cout<<"####################### This is C++ problem solving ###################"<<endl;
    int user_input;
    cout << "Enter a positive number no greater than 15"<<endl;
    cin >> user_input;

    while(user_input > 15 || user_input < 0){
        cout << "Enter 15 or less than 15:";
        cin >> user_input;
    }
    cout << "Your number is: "<< user_input << endl;

    for (int i = 0; i < user_input; i++){
            for (int j =0; j<user_input; j++){
                    cout << "X";
            }
            cout << endl;
    }

    int fifty = 50;
    int one_hundrad = 100;
    int total = fifty+one_hundrad;
    cout << "This is total: "<< total << endl;

    float totalSalesPercentage = 0.58;
    float salesThisYear = 8.68;
    cout << endl << endl;
    cout << "Total sales this year is ";
    cout << totalSalesPercentage* salesThisYear << endl;

    float stateTax = 0.04;
    float countryTax = 0.02;
    int purchase = 95;
    float total_state_purchase = purchase * stateTax;
    float total_country_purchase = purchase * countryTax;

    cout << "State purchase amount is " << total_state_purchase << endl;
    cout << "Country purchase amount is " << total_country_purchase << endl;

    float Tax = 0.0675;
    float Tip = 0.20;

    float meal_charge = 88.67;
    float meal_tax_charge = meal_charge * Tax;
    float meal_tip_charge = meal_charge * Tip;
    float total_bill = meal_charge + meal_tax_charge + meal_tip_charge;

    cout << "Total cost "<<meal_charge << endl;
    cout << "Tax " << meal_tax_charge << endl;
    cout << "Tip " << meal_tip_charge << endl;
    cout << "Total " << total_bill << endl;


    int a = 28;
    int b = 32;
    int c = 37;
    int d = 24;
    int e = 33;
    int sum = a+b+c+d+e;
    int avr = sum/5;
    cout << "The average is: " << avr << endl;

    double periods = 26;
    double pay_amount = 2200;
    double annual_pay = pay_amount * periods;
    cout << "The annual pay is: " << annual_pay << endl;

    int number1, number2;

    cout << "Enter 1st number: ";
    cin >> number1;
    cout << "Enter 2nd number: ";
    cin >> number2;
    cout << "The result is: " << number1+number2 <<endl;

    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    cout <<"After swapping numbers are " << number1 <<" and " << number2 << endl;

    cout << "String size: " << sizeof(char) << endl;
    cout << "Float size: " << sizeof(float) << endl;
    cout << "Int size: " << sizeof(int) << endl;
    cout << "Double size: " << sizeof(double) << endl;

    int i,num;

    for(i=0;i<10;i++){
        num = rand()%100;
        cout <<" "<< num;
    }

    cout << "\n";
    return 0;
}
