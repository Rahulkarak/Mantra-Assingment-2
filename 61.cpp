#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;

    cout << "Input any number: ";
    cin >> num;

   
    if (num.length() == 1) {
        cout << "The number after swapping the first and last digits are: " << num << endl;
    } else {
       
        char temp = num[0];
        num[0] = num[num.length() - 1];
        num[num.length() - 1] = temp;

        cout << "The number after swapping the first and last digits are: " << num << endl;
    }

    return 0;
}
