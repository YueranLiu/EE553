#include <iostream>
int sum(int m){

    int w;
    w = m*(m+1)/2;
    return w;
}
int sum(int m);
int main() {
    int res;
    int n;
    n=1;
    res = 0;
    while (n <=100){
        res += n;
        n += 1;

    }
    std::cout << res << std::endl;
    std::cout << sum(100)<< std::endl;

    if(res==sum(100)){
        std::cout << "two answers are same"<< std::endl;
    }

}