#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() 
{

    int t, count;
    for (t = 0; t < 10 ; t++)
    {
        count = 1;
        for(;;)
        {
            cout << count << " ";
            count++;
            if(count == 16)
            {
                cout << endl;
                break;
            }
        }
    }
    return 0;
}