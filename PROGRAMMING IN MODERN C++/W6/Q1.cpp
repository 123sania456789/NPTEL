#include<iostream>
#include<cstring>
using namespace std;
class Base{
protected:
    string s;
public:
    Base(string c) : s(c){}
    virtual ~Base(){ } //LINE-1
    virtual string fun(string x)=0; //LINE-2
};
class Derived : public Base{
public:
    Derived(string c) : Base(c) {}
    ~Derived();
    string fun(string x){
        return s+x;
    }
};
class Wrapper{
public:
    void fun(string a, string b){
        Base *t = new Derived(a); //LINE-3
        string i = t->fun(b);
        cout << i << " ";
        delete t;
    }
};

Derived::~Derived(){ cout << s << " "; }
int main(){
    string i, j;
    cin >> i >> j;
    Wrapper w;
    w.fun(i,j);
    return 0;
}
