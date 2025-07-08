#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string bin1, bin2, result = "";
    int carry = 0;


    cout << "Input the 1st binary number: ";
    cin >> bin1;
    cout << "Input the 2nd binary number: ";
    cin >> bin2;

    int len1 = bin1.length();
    int len2 = bin2.length();

    if (len1 < len2)
        bin1.insert(0, len2 - len1, '0');
    else if (len2 < len1)
        bin2.insert(0, len1 - len2, '0');

   
    for (int i = bin1.length() - 1; i >= 0; i--) {
        int bit1 = bin1[i] - '0';
        int bit2 = bin2[i] - '0';
        int sum = bit1 + bit2 + carry;

        result += (sum % 2) + '0'; 
        carry = sum / 2;            
    }

  
    if (carry)
        result += '1';

    reverse(result.begin(), result.end());

    cout << "The sum of two binary numbers is: " << result << endl;

    return 0;
}
