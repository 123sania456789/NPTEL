#include<iostream>
using namespace std;
class position{
    int x, y;
    public:
        position(int a, int b) : x(a), y(b) {}
        position operator-(const position& p1){ //LINE-1
            position p(0,0);
            p.x = this->x - p1.x; //LINE-2
            p.y = this->y - p1.y; //LINE-3
            return p;
        }
        void print(){ cout << "(" << x << ", " << y << ")"; }
};

int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    position p1(x1,y1), p2(x2,y2), p3(0,0);
    p3 = p1-p2;
    p3.print();
    return 0;
}
