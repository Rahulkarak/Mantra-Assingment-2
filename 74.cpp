#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of values: ";
    cin >> n;

    double num;
    double maxNum = INT_MIN;
    double minNum = INT_MAX;  

    cout << "Enter numbers"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> num;
    
        if (num > maxNum) maxNum = num;
        if (num < minNum) minNum = num;
    }

    double difference = maxNum - minNum;

    cout << fixed << setprecision(2);
    cout << "Difference between max and min: " << difference << endl;

    return 0;
}
