#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() 
{
    int sample[10];
    int t = 0;

    //cargamos el array
    for(t=0;t<10;t++)
    {
        sample[t] = t + 1000 ;

    }

    //Mostramos contenido de array
    for(t=0;t<10;t++)
    {
        cout << "El valor de sample[" << t << "]: " << sample[t] << endl;
    }

    return 0;
}