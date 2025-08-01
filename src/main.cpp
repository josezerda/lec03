#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

void stringInverterCase (char * str);

int main() 
{
    char string[80];
    strcpy (string, "This Is A Test");
    cout << string << endl;
    stringInverterCase(string);
    cout << string << endl;
    return 0;
}


void stringInverterCase (char * str)
{
    int i;
    for (i=0; *str ;i++)
    {
        if (isupper(*str))
        {
            *str = tolower(*str);
        }
        else
        {
            *str = toupper(*str);
        }
        str++;
    }
}