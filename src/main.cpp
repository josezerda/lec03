#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

void f(int i);
void f(int i, int j);
void f(double k);


int main()
{
    f(3);
    f(6, 6);
    f(9.999);

    return 0;
}

void f(int i)
{
    cout << "In f(int), i is: " << i <<endl;
}
void f(int i, int j)
{
    cout << "In f(int, int), i is: " << i << " J is "<< j << endl;
}
void f(double k)
{
    cout << "In f(double), k is: " << k <<endl;
}
