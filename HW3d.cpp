#include <iostream>
using namespace std;

int fibo(int n){
    if (n==1 or n==2){
        return 1;
    }
    if (n <= 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);




}

int main() {
 int m;
 int N;
 cin>>m;
 N=fibo(m);
 cout<< N<<"\n";
}