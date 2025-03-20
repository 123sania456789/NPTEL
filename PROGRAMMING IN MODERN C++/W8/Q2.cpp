#include<iostream>
#include<exception>
#include<vector>
#include<cstdlib>
using namespace std;
class InvalidAccess : public exception { // LINE-1
    public:
        virtual const char* what() const throw() {
            return "invalid access";    //LINE-2
        }
};
template<class T>
class ItemList{
    int n;
    T* items;    //LINE-3
    public:
        ItemList(vector<T> _items) : n(_items.size()), 
                       items((T*)malloc(n * sizeof(int))){
            for(int i = 0; i < n; i++){
                items[i] = _items[i];
            }
        }
        
        T& operator[](int i){     //LINE-4
            if(i >= 0 && i < n){
                return items[i];
            }
             throw InvalidAccess();      //LINE-5
       }
};

int main(){
    int idx[3];
    for(int i = 0; i < 3; i++){
        cin >> idx[i];
    }
    
    vector<int> iVec;
    vector<char> cVec;
    for(int i = 0; i < 5; i++){
        iVec.push_back((i + 1) * 10);
        cVec.push_back(65 + i);
    }
    
    ItemList<int> iList(iVec);
    ItemList<char> cList(cVec);
    
    for(int i = 0; i < 3; i++){
        try{
            cout << iList[idx[i]] << ", ";
            cout << cList[idx[i]] << endl;
        }catch(InvalidAccess e){
            cout << e.what() << endl;
        }
    }
    return 0;
}
