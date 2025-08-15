#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

double running_avg( int i);
void reset();

int main()
{
    int num;

    do
    {
        cout << "Enter numbers (-1 to quit, -2 to reset): ";
        cin >> num;
        if (num == -2)
        {
            reset();
            continue;        
        }

        if (num != -1)
            cout << "Running average is: " << running_avg (num);
        cout << endl;
        /* code */
    } while (num != -1);

    return 0;
}
