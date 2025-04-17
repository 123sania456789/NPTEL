#include <iostream>
#include <future>
#include <cmath>
using namespace std;

struct NthPrime{
    const long long n;
    NthPrime(const long long& n) : n( n) { }
    bool isPrime(long long n){
        if (n <= 1)
            return false;
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
 
        return true;
    }
        long long operator()() {     //LINE-1
        long long num = 2;
        for(int i = 0; i < n; num++) {
            if (isPrime(num)) {
                ++i;
            }
        }
        return num-1;
    }
};

long long findNthPrime(int n){
    auto a =async(NthPrime(n));    //LINE-2
    return a.get();                  //LINE-3    
}
int main() {
    int n;
    cin >> n;
    cout << findNthPrime(n) << endl;
    return 0;
}
