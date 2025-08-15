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
    Vehicle sportscar;

    int range1, range2;

    //Assign values to fields in minivan
    minivan.passengers = 7;
    minivan.fuelcap = 16;   // galones
    minivan.mph = 21;       //millas por galon

    //Assign values to fields in sportscar
    sportscar.passengers = 2;
    sportscar.fuelcap = 14;   // galones
    sportscar.mph = 12;       //millas por galon



    range1 = minivan.fuelcap * minivan.mph;
    range2 = sportscar.fuelcap * sportscar.mph;

    // Compute
    cout << "Minivan can carry " << minivan.passengers << " passangers a range of: " << range1 << " miles away" << endl;
    cout << "Sportscar can carry " << sportscar.passengers << " passangers a range of: " << range2 << " miles away" << endl;

    return 0;
}
