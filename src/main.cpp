#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() 
{
    for(int i=2;i<=100;i++)
    {
        cout << "\nFactor of: "<< i << " is: ";
        for(int j = 2; j <i ; j++)
        {
            if((i%j) == 0)
            {
                cout << j << " ";
            }       
        }
    }

    return 0;
}