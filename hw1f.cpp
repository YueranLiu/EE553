#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float sum1,sum2;
    float n,m,j;
    n=1;
    j=0;
    m=0;
    sum1=0;
    sum2=0;

    for (; ;) {
        j=n*n;
        sum1 +=1/j;
        m=(n+1)*(n+1);
        sum2 = sum1+1/m;
        n++;
        if(sum1==sum2){
            cout << sqrt(6 * sum1) << '\n';
            cout << sqrt(6 * sum2) << '\n';
            cout << n;
            break;
        }

    }


    }
