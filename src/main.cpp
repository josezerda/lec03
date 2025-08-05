#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

double &f(); //return a reference
double val = 100.1;

int main()
{
    double x;
    cout << f() << endl;

    x = f();    //assign value of val to x
    cout << x << endl;

    f() = 99.1; //change val's new value
    cout << f() << endl;
    return 0;
}


double &f()
{
    return val;
}
