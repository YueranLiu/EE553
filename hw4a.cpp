#include <iostream>
#include <cmath>
using namespace std;

class Vec3d{
    
    private:
    double x, y, z;
    public:
    Vec3d (): x(0),y(0),z(0) {}
    
    Vec3d (double x) : x(x) ,y(0),z(0) {}
    
    Vec3d (double x, double y) : x(x), y(y),z(0) {}
    
    Vec3d (double x, double y, double z) : x(x), y(y), z(z) {}
    friend ostream& operator << ( ostream& os, const Vec3d& a)
    {
        os << '(' << a.x <<',' << a.y << ',' << a.z << ')';
        return os;
    }
    
    
    Vec3d operator + (const Vec3d& a)
    const {
        return Vec3d (a.x+x,a.y+y,a.z+z);
    }
    friend double dot(const Vec3d a, const Vec3d b);
    
    static double dot(const Vec3d a, const Vec3d b)
    {
        return (a.x*b.x+a.y*b.y+a.z*b.z);
    }
    
    double dot(const Vec3d& a)
    const {
        double sum;
        sum = this->x*a.x + this->y*a.y + this->z*a.z;
        return sum;
    }
    
    Vec3d operator - ()
    const {
        return Vec3d (-x,-y,-z);
    }
    
    double mag()
    const{
        return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
    }
    
    double magSq()
    const{
        return pow(x,2) + pow(y,2) + pow(z,2);
    }
    double dist(const Vec3d& a)
    const{
        return sqrt(pow(this->x-a.x,2)+pow(this->y-a.y,2)+pow(this->z-a.z,2));
    }
    
    
    
};

double  dot(const Vec3d a,const Vec3d b)
{
    return a.x*b.x+a.y*b.y+a.z*b.z;
}


int main() {
    // use friend operators
    const Vec3d a(1.0,2.5,3.5); // double precision!
    const Vec3d b(2.0);         //(2,0,0)
    const Vec3d c(2.0,3.5);     //(2,3.5,0)
    //const Vec3d d(); // d is a function that returns Vec3d
    const Vec3d e;
    
    const Vec3d f = a + e;
    const Vec3d g = -e + b; // d is not an object, pick a different one
    double x = dot(f, g); // regular function
    double y = Vec3d::dot(f,g); // static function
    double z = f.dot(g); // method
    const Vec3d h = -b;
    
    double dist = f.mag(); // square root of sum of square
    double dist2 = f.magSq(); // sum of square
    double dist3 = f.dist(g); // sqrt or sum of square of diff
    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    cout << e << '\n';
    cout << f << '\n';
    cout << g << '\n';
    cout << h << '\n';
    cout << dist << '\t' << dist2 << '\t' << dist3;
}
