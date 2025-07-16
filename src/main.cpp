#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Earth\tMoon\n";
    for (int i = 1; i <= 100; ++i)
     {
        double moonWeight = i * 0.17;
        cout << setw(5) << i << "\t" << fixed << setprecision(2) << moonWeight << "\n";
        if (i % 25 == 0) cout << endl;
    }
    return 0;
}
