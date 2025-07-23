#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>


using namespace std;


int main() 
{
    char str[80];
    char aux[80];
    int i = 0;

    strcpy(str, "this is a test");

    for(i=0; str[i]; i++)
    {
        aux[i] = toupper(str[i]);
    }
    cout << "Texto original: "<< str << endl;
    cout << "Texto modificado: "<< aux << endl;

    return 0;
}
