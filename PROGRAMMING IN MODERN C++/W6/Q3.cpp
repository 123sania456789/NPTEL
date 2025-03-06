#include<iostream>
using namespace std;
class Test{
protected:
    int n;
public:
    Test(int i) : n(i) { cout << ++n << " "; }

    virtual ~Test(); //Line-1
};

class DerivedTest : public Test{
public:
    ~DerivedTest(); //Line-2

    DerivedTest(int i) : Test(2*i) { cout<< ++n << " "; }
};

#include<iostream>
using namespace std;
class Test{
protected:
    int n;
public:
    Test(int i) : n(i) { cout << ++n << " "; }

    virtual ~Test(); //Line-1
};

class DerivedTest : public Test{
public:
    ~DerivedTest(); //Line-2

    DerivedTest(int i) : Test(2*i) { cout<< ++n << " "; }
};
