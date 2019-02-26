#include <iostream>
using namespace std;
extern int a, res;

int main ()
{

    int a, res;
    cin >> a;
    while (a != 1) {
        if (a%2==1) {
            res = 3*a+1;
            a = res;

        }
        else
            res = a/2;
            a = res;
            cout << res << endl ;
    }
    if (a==1);{
        res = 0;
        cout << res << endl ;
    }

}
