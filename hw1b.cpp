#include <iostream>
#include <cmath>
int main() {
    int n;
    double res;
    double x;
    float pi;
    double r;
    n=3;
    r=1;
    res=0;
    pi=3.1415;

    while ( n < 1000000) {
        x=pi/n;
        r=r/cos(x);
        n++;

        if (n == 10 || n == 100 || n == 1000 || n == 10000 || n == 100000 || n == 10e6)
            std::cout << r << std::endl;

    }



    return 0;
}