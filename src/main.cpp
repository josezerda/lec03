#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

double running_avg( int i);

int main()
{
    int num;

    do
    {
        cout << "Enter numbers (-1 to quit): ";
        cin >> num;
        if (num != -1)
            cout << "Running average is: " << running_avg (num);
        cout << endl;
        /* code */
    } while (num > -1);

    return 0;
}

double running_avg( int i)
{
    int count = 0;
    double sum = 0.0;

    sum = sum + i;
    count++;
    return sum/(float)count;

}


