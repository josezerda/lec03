#include <iostream>

using namespace std;

int square (int x)
{
    int valor = x;
    for (int i = 1; i < x; i++)
    {
        valor += x;
        /* code */
    }
    return valor;
}


int main()
{

    int num = 0;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "El cuadrado de: "<< num << " es: "<< square(num) <<endl;
  
}


