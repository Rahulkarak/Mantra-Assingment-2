#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number ";
    cin >> n;


    vector<int> numbers(n);
    unordered_map<int, int> freq;

    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        freq[numbers[i]]++;
    }

    int maxFreq = 0;
    for (auto pair : freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
        }
    }

    cout << "Mode value(s): ";
    for (auto pair : freq) {
        if (pair.second == maxFreq) {
            cout << pair.first << " ";
        }
    }
    cout << endl;

    return 0;
}
