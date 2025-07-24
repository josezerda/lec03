#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>


using namespace std;


int main() 
{
    int total;
    int *ptr;
    int val;


    total = 3200;
    ptr = &total;  //ptr gets the address of total

    val = *ptr;     //val gets the value at that address

    cout << "Total is; " << val << endl;

    return 0;

}
