#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

double &change_it (int i, double *ptr);


int main()
{
    double vals[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    int i;

    for (i = 0; i < 5; i++)
    {
        cout << vals[i] << " ";
    }
    change_it(0, vals) = 33.33;
    change_it(4, vals) = 66.66;

    cout << "\n";
    for (i = 0; i < 5; i++)
    {
        cout << vals[i] << " ";
    }    
    return 0;
}

double &change_it (int i, double *ptr)
{
    return ptr[i];
}