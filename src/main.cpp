#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;


int factr (int n);



int main()
{
    //Use recursive version
    cout << "Factorial recursive: " << factr(5) << endl;
    
    return 0;
}


int factr (int n)
{
    int valor;
    if (n == 1)
        return n;
    valor = factr (n -1) * n;
    return valor;
}
