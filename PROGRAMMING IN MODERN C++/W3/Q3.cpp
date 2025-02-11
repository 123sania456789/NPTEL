#include<iostream>
using namespace std;
class Point3D {
    int x, y;
    mutable int z1,z2,z3; // LINE-1
public:
    Point3D(int x_, int y_) : x(x_),y(y_),z1(0),z2(0),z3(0){ } //LINE-2
    
  void calcZ() const{
    z1 = x*x;
    z2=y*y;
    z3=z1*z2;
  }
  
  void print() const {
        cout << "(" << z1<< "," << z2 << "," << z3 << ")";
    }
};

int main() {
    int i, j;
    cin >> i >> j;
    const Point3D m(i, j);
    m.calcZ();
    m.print();
    return 0;
}
