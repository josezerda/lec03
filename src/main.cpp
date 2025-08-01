#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;


void f_pointer (int *j);


int main() 
{
    int i = 0;
    int *p;

    p = &i;

    cout << "Valor i antes de f_pointer: "<< i << endl;

    f_pointer(p);

    cout << "Valor i despues de f_pointer: "<< i << endl;

    return 0;
}


void f_pointer (int *j)
{
    *j = 102;
}