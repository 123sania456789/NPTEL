#include<iostream>
#include<vector>
using namespace std;

template<class T>
struct Filter{
    T ub, lb;
    Filter(T _lb = 0, T _ub = 0) : ub(_ub), lb(_lb) { }
    bool operator()(T i){ return (i <= ub && i >= lb); }    
};

template<class T, class Pred>     //LINE-1

T find_if(T first, T last, Pred pred) {

    while (first != last && !pred(*first)) ++first;    //LINE-2

        return first;
}


void printAllFiltered(vector<int> iVec, int lb, int ub){
    Filter<int> f(lb, ub);
    vector<int>::iterator p = find_if(iVec.begin(), iVec.end(), f);    //LINE-3
    while(p != iVec.end()){
        cout << *p << " ";
        p = find_if(++p, iVec.end(), f);
    }
}

int main(){
    vector<int> iVec {7, 8, 1, 4, 2, 5, 6, 3};
    int l, u;
    cin >> l >> u;
    printAllFiltered(iVec, l, u);
    return 0;
}
