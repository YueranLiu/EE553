#include <iostream>

int main() {
    float n,i,sum1;
    int m,j,sum2;
    n=1;
    m=100;
    sum1=0;
    sum2=0;
    while(n<=100){
        i=1/n;
        sum1+=i;
        n+=1;
    }
    while(m>=1){
        j=1/m;
        sum2+=j;
        m-=1;

    }
    std::cout << sum1 << std::endl;
    std::cout << sum2 << std::endl;
    std::cout << sum1-sum2 << std::endl;

}
