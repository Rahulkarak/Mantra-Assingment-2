#include <iostream>    
using namespace std;

int main() {
    double radius, height;

    cout << "Input Cone's radius: ";
    cin >> radius;
    cout << "Input Cone's height: ";
    cin >> height;

    double volume = (1.0 / 3) * 3.14 * radius * radius * height;

    cout << "The volume of the cone is: " << volume << endl;

    return 0;
}
