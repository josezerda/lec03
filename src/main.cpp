#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;



int main(int argc, char *argv[])
{
    double a, b;
    if (argc != 3)
    {
        cout << "Usage: lec03 num1 num2" << endl;
        return 1;    
    }

    a = atof(argv[1]);
    b = atof(argv[2]);

    cout << "Result: " << a + b << endl;
    

    
    return 0;
}
