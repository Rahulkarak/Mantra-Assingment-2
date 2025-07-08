#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter value of n "<<endl;
    cin >> n;

    int count = 0, num = 2, sum = 0;

    while (count < n) {
        if (isPrime(num)) {
            sum += num;
            count++;
        }
        num++;
    }

    cout << "Sum of prime number is " << sum << endl;

    return 0;
}
