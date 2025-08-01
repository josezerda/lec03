#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

char *get_substr(char *sub, char *str);

int main() 
{
    char *substr;

    substr = get_substr("tres", "uno dos tres cuatro");

    cout << "Substring found: " << substr << endl;
    
    return 0;
}

char *get_substr(char *sub, char *str)
{
    int t;
    char *p, *p2, *start;

    for(t=0; str[t]; t++)
    {
        p = &str[t];
        start = p;
        p2 = sub;
        while (*p2 && *p2==*p)
        {
            p++;
            p2++;
            /* code */
        }
        if(!*p2)
        {
            return start;
        }
       
    }
    return 0;
}