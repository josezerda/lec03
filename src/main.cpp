#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    double jovianYears;
    cout << "Enter Jovian years: ";
    cin >> jovianYears;

    double earthYears = jovianYears * 12.0;
    cout << "Equivalent Earth years: " << fixed << setprecision(1) << earthYears << endl;

    return 0;
}