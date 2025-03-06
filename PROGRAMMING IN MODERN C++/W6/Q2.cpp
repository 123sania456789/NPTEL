#include<iostream>
using namespace std;
class Base{
    int i;
    virtual void fun(); //LINE-1

public:
    Base(int x) : i(x) {}
    friend void caller(Base &t); //LINE-2
};
#include<iostream>
using namespace std;
class Base{
    int i;
    virtual void fun(); //LINE-1

public:
    Base(int x) : i(x) {}
    friend void caller(Base &t); //LINE-2
};
