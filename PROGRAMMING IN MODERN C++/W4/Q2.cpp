#include<iostream>
using namespace std;
class Interest; //LINE-1
class TotalAmount{
    double prinAmt;
    double amt = 0;
public:
    TotalAmount(double p) : prinAmt(p){}
    double calculate(Interest&);
};
class Interest{
    double in;
public:
    Interest(double i) : in(i){ }
    friend class TotalAmount;//LINE-2
};

double TotalAmount::calculate(Interest &i){
    amt = prinAmt * (1 + i.in / 100);
    return amt;
}
int main(){
    double i, j;
    cin >> i >> j;
    TotalAmount m(i);
    Interest in(j);
    cout << "Matured Amount: " << m.calculate(in);
    return 0;
}

