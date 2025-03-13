#include <iostream>
using namespace std;
class IP1 {
    int i;
    public:
        IP1(int ai) : i(ai) {}
        int get() const { return i; }
        void update() { i *= 10; }
    };
    class IP2 {
        int i;
        public:
            IP2(int ai) : i(ai) {}
            int get() const { return i; }
            IP2(IP1& a) : i(a.get()) {} //LINE-1
            operator IP1() { return IP1(i); } //LINE-2
            void update() { i *= 20; }
    };

int main() {
    int i;
    cin >> i;
    IP1 a(i+2);
    IP2 b(i);
    const IP2 &r = static_cast<IP2>(a);
    a.update();
    cout << a.get() << ":";    
    cout << r.get() << ":";
    const IP1 &s = static_cast<IP1>(b);
    b.update();
    cout << b.get() << ":";
    cout << s.get() << ":";
    return 0;
}
