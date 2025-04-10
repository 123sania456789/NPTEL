#include <iostream>
    #include <vector>
    #include <functional>
     
    int main(){
       std::function<int(std::vector<int>, int)> RecMin;    //LINE-1
 
        RecMin = [&RecMin](std::vector<int> tVec, int n) -> int {   //LINE-2
            return n == 1 ? tVec[0] : tVec[n - 1] < RecMin(tVec, n - 1) ? 
                tVec[n - 1] : RecMin(tVec, n - 1); 
        };

auto Print = [&RecMin](std::vector<int> tVec) {
            std::cout << RecMin(tVec, tVec.size()); 
        };
        int n, m;
        std::vector<int> vec;
        std::cin >> n;
        for(int i = 0; i < n; i++){
            std::cin >> m;
            vec.push_back(m);
        }
        Print(vec);
        return 0;
    }
