#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double principal, rate, time, amount, compound_interest;


    cout << "Input the Principle: ";
    cin >> principal;

    cout << "Input the Rate of Interest: ";
    cin >> rate;

    cout << "Input the Time: ";
    cin >> time;


    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    cout << "The Interest is " << compound_interest << endl;
    cout << "The total amount " << amount << endl;

    return 0;
}
