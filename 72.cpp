#include <iostream>
#include <vector>
using namespace std;

int countCombinations(int n, int s, int start, vector<int>& current) {
    if (n == 0 && s == 0) {
        return 1;
    }
    if (n == 0 || s < 0) {
        return 0;
    }

    int count = 0;
    for (int i = start; i <= 9; i++) {
        current.push_back(i);            
        count += countCombinations(n - 1, s - i, i + 1, current); 
        current.pop_back();            
    }
    return count;
}

int main() {
    int n, s;
    cout << "Enter number of digits  ";
    cin >> n;
    cout << "Enter target sum ";
    cin >> s;

    vector<int> current;
    int result = countCombinations(n, s, 0, current);

    cout << "Number of valid combinations: " << result << endl;
    return 0;
}
