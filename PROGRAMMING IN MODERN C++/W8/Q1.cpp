#include<iostream>
#include<vector>
using namespace std;
template<class T>    //LINE-1
class Filter{
    T ub, lb;
    public:
        Filter(T _lb = 0, T _ub = 0) : ub(_ub), lb(_lb) { }
        vector<T> extract(vector<T> tVec);
};
template<class T> vector<T> Filter<T>::extract(vector<T> tVec) {    //LINE-2
    vector<T> rVec;
    for(int i = 0; i < tVec.size(); i++){
        if(tVec[i] <= ub && tVec[i] >= lb)
            rVec.push_back(tVec[i]);
    }
    return rVec;
}

int main(){
    int i1, i2;
    char d1, d2;
    cin >> i1 >> i2 >> d1 >> d2;
    Filter<int> flt1(i1, i2);
    Filter<char> flt2(d1, d2);
    int arr1[] = {30, 10, 50, 60, 80, 20, 40, 70, 90};
    char arr2[] = {'a', 'n', 'i', 'm', 'l', 's'};
    vector<int> iVec(arr1, arr1 + 9);
    vector<char> cVec(arr2, arr2 + 6);
    vector<int> rVec1 = flt1.extract(iVec);
    vector<char> rVec2 = flt2.extract(cVec);
    for(int i = 0; i < rVec1.size(); i++)
        cout << rVec1[i] << ", ";
    cout << endl;
    for(int i = 0; i < rVec2.size(); i++)
        cout << rVec2[i] << ", ";
    return 0;
}
