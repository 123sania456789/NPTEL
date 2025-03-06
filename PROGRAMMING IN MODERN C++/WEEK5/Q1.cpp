#include <iostream>
using namespace std;

class Area {
public:
    double getValArea(int x, int y) { return (x * y); } // Renamed function to avoid ambiguity
};

class Perimeter {
public:
    double getValPerimeter(int x, int y) { return (2 * (x + y)); } // Renamed function to avoid ambiguity
};

class Rectangle : public Area, public Perimeter { // LINE-1 (No change)
    int x, y;
public:
    Rectangle(int _x, int _y) : x(_x), y(_y) { }
    
    double getArea() { return getValArea(x, y); } // LINE-2 (Calling renamed function)
    
    double getPerimeter() { return getValPerimeter(x, y); } // LINE-3 (Calling renamed function)
};

int main(){
    int a, b;
    cin >> a >> b;
    Rectangle r(a,b);
    cout << r.getArea() << ", " << r.getPerimeter();
    return 0;
}
