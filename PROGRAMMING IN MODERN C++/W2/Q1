#include <iostream> 
using namespace std;

 struct point { 
   int x, y; 
   point operator+(int t) const{
              point new_pt;
              new_pt.x=x + t;
              new_pt.y=y+ t;
              return new_pt;
      }
};

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    point p = {a, b};
    int t = c;
    point np = p + t;
    cout << "(" << np.x << ", " << np.y << ")";
    return 0;
}
