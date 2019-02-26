//help by TA Guanchen Jiang


#include <iostream>
#include <cmath>
#include <fstream>


using namespace std;

double robotlocation(double r, double theta , double* dx, double* dy) {
    *dx += -r * cos((theta + 90 ) * 3.1415 / 180);
    *dy += r * sin((theta + 90 ) * 3.1415 / 180);
}

double** readFile(string fileName)
{
    double array[500] = {0};
    double dx = 0, dy = 0;
    int n, i = 0;
    ifstream f(fileName);
    if (!f){
        cout <<"Open failed";
        return 0;
    }

    while (f){
        f >> array[i];
        if (array[i] < 0){
            break;
        }
        i+=1;
        n=i;
    }

    for (int i = 0; i < n; i+=2) {
        double theta = array[i];
        double r = array[i+1];
        robotlocation( r,  theta ,  &dx,  &dy);
        cout<< "X="<< dx <<"\n";

        cout<< "Y="<< dy <<"\n";
        
    }
    return new double*[1];



}

int main(){
    readFile("test.txt");

    return 0;
}
