#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int side[3];

    cout << "Enter three sides of the triangle: ";
    for (int i = 0; i < 3; i++) {
        cin >> side[i];
    }

    sort(side, side + 3);

    if (side[0]*side[0] + side[1]*side[1] == side[2]*side[2]) {
        cout << "Yes, it's a right triangle." << endl;
    } else {
        cout << "No, it's not a right triangle." << endl;
    }

    return 0;
}
