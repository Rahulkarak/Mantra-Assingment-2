#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;

    
    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of third point (x3 y3): ";
    cin >> x3 >> y3;

   
    double D = 2 * (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));

    if (D == 0) {
        cout << "Points are collinear. Circumcircle can't be formed." << endl;
        return 0;
    }

    
    double Ux = ((x1*x1 + y1*y1)*(y2 - y3) + 
                 (x2*x2 + y2*y2)*(y3 - y1) + 
                 (x3*x3 + y3*y3)*(y1 - y2)) / D;

    double Uy = ((x1*x1 + y1*y1)*(x3 - x2) + 
                 (x2*x2 + y2*y2)*(x1 - x3) + 
                 (x3*x3 + y3*y3)*(x2 - x1)) / D;

    
    double radius = sqrt((Ux - x1)*(Ux - x1) + (Uy - y1)*(Uy - y1));

   
    cout << "\nCircumcenter Coordinates: " << Ux << ", " << Uy  << endl;
    cout << "Circumradius: " << radius << endl;

    return 0;
}
