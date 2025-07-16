#include <iostream>

using namespace std;


int main()
{
    double result, numer, denom;

    cout << "Enter value: ";
    cin >> numer;

    cout << "Enter divisor: ";
    cin >> denom;

    if (denom !=0)
    {
        cout << "divisor does not equal zero, so division is OK\n";
        result = numer/denom;
        cout << "Result: "<< result <<endl;
        /* code */
    }
    else
    {
        cout << "Divisor equals zero, so we don't do anything"<< endl;
    }
    

    return 0;
      
}


