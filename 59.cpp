#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double lat1, lon1, lat2, lon2;
    const double PI = 3.141592653589793;
    const double R = 6371.0; 


    cout << "Input the latitude of coordinate 1: ";
    cin >> lat1;
    cout << "Input the longitude of coordinate 1: ";
    cin >> lon1;

    cout << "Input the latitude of coordinate 2: ";
    cin >> lat2;
    cout << "Input the longitude of coordinate 2: ";
    cin >> lon2;

  
    lat1 = lat1 * PI / 180.0;
    lon1 = lon1 * PI / 180.0;
    lat2 = lat2 * PI / 180.0;
    lon2 = lon2 * PI / 180.0;

   
    double dlat = lat2 - lat1;
    double dlon = lon2 - lon1;

    double a = pow(sin(dlat / 2), 2) +
               cos(lat1) * cos(lat2) * pow(sin(dlon / 2), 2);

    double c = 2 * atan2(sqrt(a), sqrt(1 - a));
    double distance = R * c;

    
    cout << "The distance between those points is: " << fixed << distance << endl;

    return 0;
}
