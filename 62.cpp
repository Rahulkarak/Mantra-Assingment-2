#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

   
    for (int i = n; i >= 3; i--) {
        if (isPrime(i) && isPrime(i - 2)) {
            cout << "The largest twin prime pair  " << n << " is: " << i - 2 << ", " << i << " " << endl;
            return 0;
        }
    }

    cout << "No twin prime pair found  " << n << endl;
    return 0;
}
