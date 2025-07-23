#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() 
{
    int matriz[3][4];

    int valor = 1, i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matriz[i][j] = valor;
            valor++;
        }
        
        /* code */
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
           cout << "[" << i << "][" << j << "]= " << matriz[i] [j]; 
        }
        cout << endl;
        
        /* code */
    }




    return 0;
}
