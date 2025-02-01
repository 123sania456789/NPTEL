#include <iostream>
using namespace std;

int product (int a,int b,int c){
    return a * b * c;
}
int product (int a,int b) {
    return a * b;    
}

int product (int a) {
    return a ;    
}

double product(double a, double b){
       return a*b;
}

int main() {
    int i1, i2, i3;
    double d1, d2;
    cin >> i1 >> i2 >> i3 >> d1 >> d2;
    cout << product(i1) << ", ";
    cout << product(i1, i2) << ", ";
    cout << product(i1, i2, i3) << ", ";
    cout << product(d1, d2);
    return 0;
}
