#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
struct less_mag {
    bool operator()(string x, string y) {    //LINE-1

        return (x.length() < y.length()) ;    //LINE-2
    }
};

int main(){
    vector<string> iVec;
    int n;
    string na;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> na;
        iVec.push_back(na);
    }
    sort(iVec.begin(), iVec.end(), less_mag());
    for(int i = 0; i < iVec.size(); i++)
        cout << iVec[i] << " ";
    return 0;
}
