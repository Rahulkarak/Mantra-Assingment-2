#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int n;

    cout << "Enter number of items  ";
    cin >> n;

    double unitPrice, quantity;
    double totalSales = 0;
    double totalQuantity = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Enter unit price and quantity for item " << i << ": ";
        cin >> unitPrice >> quantity;

        totalSales += unitPrice * quantity;
        totalQuantity += quantity;
    }

    double averageQuantity = totalQuantity / n;


    cout << fixed << setprecision(2);
    cout << "Total Sales Amount: " << totalSales << endl;

    cout << fixed << setprecision(1);
    cout << "Average Sales Quantity: " << averageQuantity << endl;

    return 0;
}
