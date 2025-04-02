#include <iostream>
int getNumber(char c){
    return int(c);
}
int getNumber(double d){
    return int(d);
}
double getNumber(int i){
    return double(i);
}

template<typename T, typename U>    //LINE-1

decltype(auto) divide(T n1, U n2) {   //LINE-2
    return getNumber(n1) / getNumber(n2);
}

int main(){
    int a;
    double b;
    char c;
    std::cin >> a >> b >> c;
    std::cout << divide(c, a) << " ";
    std::cout << divide(c, b);
    return 0;
}
