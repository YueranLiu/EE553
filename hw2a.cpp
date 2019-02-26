#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc)
{
    int i = 0;
    int j = 0;
    const int k = 248;
    int w = 0;
    double v = 0;
    double c = 40;
    int d = 5;
    double f = 1;
    cout << " MPH\tWind Chill Factor (Temperature +40 to -40F" <<endl;
    cout << "calm";
    for ( i = 0 ; i < 17; i ++)
        cout << setw(3) << ( 40 - ( i * 5 )) << " " ;
    cout << " " << "F" << endl;
    for ( i = 1; i < 13; i++ )
    {
        d = i * 5.0 * f;
        cout << setw(3) << d << " ";
        v = pow(d, 0.16);
        for ( j = 0; j < 17; j++)
        { /* Temperature */
            c = 40 - (j * 5);
            w = 35.74 + 0.6215 * c - 35.75 * v +
                0.4275 * c * v;
            cout << setw(3) << w << " ";
            if( j == 16) cout << " " << "F";
        }
        cout << endl;
    }
    cout << "MPH" << endl;
    return 0;
}
