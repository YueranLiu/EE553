#include <iostream>
using namespace std;

class complex {
private:
                    double real, img;
public:
    complex(double r = 0, double i = 0) : real(r), img(i) {}

    void print()
    const {
        cout << real << ',' << img << "\n";
    }



    complex operator+(const complex &a)
    const {
        return complex(real + a.real, img + a.img);
    }
    complex add(const complex &a)
    const {
        return complex(real + a.real, img + a.img);
    }


    complex operator-()
    const {
        return complex(-real, -img);
    }

};

int main() {

    complex a(1, 2);
    complex b(1, 3);
    complex c = a + b;
    complex d = -a ;
    complex f = a*b;
    a.print();
    cout << "\n";
    b.print();
    cout << "\n";
    c.print();
    cout << "\n";
    d.print();
    cout << "\n";
    f.print();
    cout << "\n";
    };
