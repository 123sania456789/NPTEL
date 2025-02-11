
#include<iostream>
#include<cmath>
using namespace std;
class Complex{
    const int x,y;
public:
    Complex(int _x=0, int _y=0) : x(_x),y(_y) {} //LINE-1
    Complex(const Complex& c) : x(c.x),y(c.y) {} //LINE-2
    void sum(Complex p){
        int rx = x+p.x; //LINE-3
        int ry = y+p.y; //LINE-4
        cout << "(" << rx << "," << ry << ")" << endl;
    }
    void print(){ cout << "(" << x << "," << y << ")" << endl; }
};
int main(){
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Complex c1(x1,y1), c2(x2,y2);
    c1.print();
    c2.print();
    c1.sum(c2);
    return 0;
}
