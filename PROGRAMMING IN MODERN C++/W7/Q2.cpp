#include<iostream>
using namespace std;
class myClassA{
    int a = 5;
    public:
        void print(){
            cout << a << " ";
        }
};

class myClassB{
    int b = 10;
    public:
        void print(){
            cout << b;
        }
        void operator=(int x){ //LINE-1
            b = b * x;
        }
};
void fun(const myClassA &t){
    int x;
    cin >> x;
    myClassA &u =  const_cast<myClassA&>(t); //LINE-2
    u.print();
    myClassB &v = reinterpret_cast<myClassB&>(u); //LINE-3
    v = x;
    v.print();
}

int main(){
    myClassA t1;
    fun(t1);
    return 0;
}
