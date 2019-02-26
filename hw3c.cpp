//
//
//


#include <iostream>
#include <string>
using namespace std;


class Body {
private:
    string name;
    double mass;
    double x,y,z;
    double radius;

public:
    Body(string n,double m, double x, double y, double z, double r) : name(n), mass(m), x(x), y(y), z(z), radius(r) {}


    friend ostream& operator <<(ostream& os, Body a);

    void print() const{
        cout << mass << "\n";
        cout << x << ','<<y<<','<<z<<"\n";
        cout << radius << "\n";
    }
};

ostream& operator <<(ostream& os, Body a){
    os << a.name<<','<<a.mass<<','<<a.x<<','<<a.y<<','<<a.z<<','<<a.radius;
    return os;
}


int main() {
    //         name      mass(kg) x y z  radius (m)
    Body earth("earth", 5.972e24, 0,0,0, 6.371e6);
    Body moon("moon",   7.34767309e22, 384.400e6,0,0,  1.737e6);
    cout << earth << '\n';
    cout << moon << '\n';
}
