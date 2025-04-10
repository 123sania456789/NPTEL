#include <iostream>
class person{
    public:
        virtual void show() = 0;
};

class Employee : public person {
    private:
        double salary;
    public:
        Employee(const double& _salary) : salary(_salary){ 
            std::cout << "lvalue" << " "; 
        }
        Employee(double&& _salary) : salary(_salary){
            std::cout << "rvalue" << " "; 
        }
        void show(){ std::cout << salary << " "; }
};

class Player : public person {
    private:
        int rank;
    public:
        Player(const int& _rank) : rank(_rank){
            std::cout << "lvalue" << " "; 
        }
        Player(int&& _rank) : rank(_rank){ 
            std::cout << "rvalue" << " "; 
        }
        void show(){ std::cout << rank << " "; }
};

template<typename T, typename U>        //LINE-1
 
T createPerson(U&& param){         //LINE-2
 
    return T(std::forward<U>(param));     //LINE-3
}

int main() {
    double s; 
    int r;
    std::cin >> s >> r;
    
    auto p1 = createPerson<Employee>(s);
    auto p2 = createPerson<Employee>(std::move(s));
    auto p3 = createPerson<Player>(r);
    auto p4 = createPerson<Player>(std::move(r));
    std::cout << std::endl;
    p1.show();
    p2.show();
    p3.show();
    p4.show();
    return 0;
}
