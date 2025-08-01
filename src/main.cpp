#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

void display (int num[]);

int main() 
{
    int t[10], i = 0;
    for(i=0;i<10;i++)
    {
        t[i] = i;
    }

    cout << "Valor t antes de display(): "<<endl; 
    for (i=0;i<10;i++)
    {
        cout <<t[i]<< " ";
    }
    display(t);
    cout << endl << "Valor t despues de display(): "<< endl;
    for (i=0;i<10;i++)
    {
        cout <<t[i]<< " ";
    }
    cout << endl;

    return 0;
}


void display (int num[])
{
    int i;
    for (i=0; i<10 ;i++)
    {
        num[i] = i * 2;
    }
}