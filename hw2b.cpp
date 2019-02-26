#include <iostream>
using namespace std;

bool isPrime(unsigned long long n)  {
    
    
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++){
        
        if (n % i == 0 && i != n){
            
            return false;
        }
        
    }
    
    return true;
    
}

int main(){
    isPrime(1) ?cout << " true\n" :
    cout << " false\n";
    return 0;
}



