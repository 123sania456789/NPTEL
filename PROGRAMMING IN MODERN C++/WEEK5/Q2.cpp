#include <iostream>
using namespace std;

class B1 {
protected:
    int b1;
public:
    B1(int b) : b1(b) {}
};

class B2 {
protected:
    int b2;
public:
    B2(int b) : b2(b) {}
};

class D : public B1, public B2 { // LINE-1: Multiple inheritance
    int d;
public:
    D(int x) : B1(x + 2), B2(x + 4), d(x) {} // LINE-2: Match expected values

    void show() {
        cout << d << ", " << b1 << ", " << b2;
    }
};
int main(){
    int x;
    cin >> x;
    D t1(x);
    t1.show();
    return 0;
}
