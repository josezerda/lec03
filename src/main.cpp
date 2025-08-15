#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

// Declare a vehicle class
class Vehicle
{
public:
    int passengers;
    int fuelcap;
    int mph;
    
};


int main()
{
    Vehicle minivan;
    int range;

    //Assign values to fields in minivan
    minivan.passengers = 7;
    minivan.fuelcap = 16;   // galones
    minivan.mph = 21;       //millas por galon

    range = minivan.fuelcap * minivan.mph;

    // Compute
    cout << "Minivan can carry " << minivan.passengers << " a range of: " << range << " miles away" << endl;

    return 0;
}
