#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>


using namespace std;

double box (double x, double y, double z);


int main() 
{
    double answ = 0.0;

    answ = box (3.3, 4.4, 5.5);


    cout << "Volumen: "<< answ << endl;


    return 0;
}


double box (double x, double y, double z)
{
    double response;
    response = x * y * z;

    return response;
 
}