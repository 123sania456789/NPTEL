#include <iostream>
template<typename T>
class Data{
    private:
        T _d;
    public:
        Data(T data) : _d(data){}
        T getData() const{
            return _d;
        }
};

template<typename T, typename U>
struct Adder{
    U operator()(std::ostream& os, Data<T>&& d1, Data<U>&& d2){
        os << "rvalue version: ";
        return (d1.getData() + d2.getData());
    }
    U operator()(std::ostream& os, const Data<T>& d1, const Data<U>& d2){
        os << "lvalue version: ";
        return (d1.getData() + d2.getData());
    }
};

template<typename F, typename... T>    //LINE-1 
 
decltype(auto) apply(std::ostream& os, F&& func, T&&... args) {    //LINE-2
 
return func(os, std::forward<T>(args)...);    //LINE-3
}

int main() {
    int i;
    double d;
    std::cin >> i >> d;
    Data<int> d1(i);
    Data<double> d2(d);
    
    std::cout << apply(std::cout, Adder<int, double>(), d1, d2);
    std::cout << std::endl;
    std::cout << apply(std::cout, Adder<int, double>(), std::move(d1), std::move(d2));
    return 0;
}
