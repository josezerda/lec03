#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>


using namespace std;


int main() 
{
    int arr[10] = {1, 4, 2, 7, 4, 2, 9, 5, 2, 7};
    cout << "Duplicate values found: ";
    bool found = false;

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) 
        {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = true;
                break; // Avoid repeating duplicates
            }
        }
    }

    if (!found)
        cout << "None.";
    cout << endl;
    return 0;
}
