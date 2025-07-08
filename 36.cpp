#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    cout << "Print floating-point number in fixed format with 1 decimal place:\n";
    double num = 0.5;
    cout << fixed << setprecision(1); 
    cout << "Test explicit type casting :\n";

    int a = 1;
    int b = 2;

    
    cout << (int)(a / b) << endl;              
    cout << (double)(a) / b << endl;          
    cout << (float)(a) / b << endl;           
    cout << (int)(num) << endl;            

    cout << "Test implicit type casting :\n";
    cout << a / b << endl;                     
    cout << a / (b + 0.0) << endl;             

    cout << "int implicitly casts to double:\n";
    int x = 4;
    double y = x;  
    cout << y << endl;

    cout << "double truncates to int!:\n";
    double z = 6.999;
    int zz = z;    
    cout << zz << endl;

    return 0;
}
