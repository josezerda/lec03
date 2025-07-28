#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>


using namespace std;

void myfunc();
void box (int length, int width, int height);


int main() 
{
    cout << "In main()"<< endl;
    
    myfunc();

    cout << "Back in main()" << endl;

    box(5,5,5);

    return 0;
}

void myfunc()
{
    cout << "Inside myfunc()" << endl;
}

void box (int length, int width, int height)
{
    cout << "El resultado es: " << length * width * height << endl;
}