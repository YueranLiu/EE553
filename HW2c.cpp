#include <iostream>
using namespace std;

bool isPrime(unsigned long long n)  {
    if (n <= 1){
        return false;
    }

    for (int i = 2; i < n; i++){

        if (n % i == 0 && i != n){

            return false;
        }

    }

    return true;

}



int countPrimes(unsigned long long a, unsigned long long b) {
    unsigned int counter;
    counter = 0;
    int j;
    j=a;
    while (j <= b) {
        if (isPrime(j) == true) {
            counter += 1;
        }
        j+=1;



    }
    return counter;
}

int main(){
    int number;
    number=countPrimes(11,17);
    cout << " the prime number is "<<number<<"\n";

    return 0;
}
