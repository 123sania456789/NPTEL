#include <iostream>
#include <algorithm>
using namespace std;
 
bool max_str (string s1, string s2) {    //LINE-1
    return (s1 > s2);            //LINE-2
}


int main() {
    std::string words[5], word;
    for(int i = 0; i < 5; i++){
        cin >> word;
        words[i] = word;
    }
    sort(words, words + 5, max_str);
    for (int i = 0; i < 5; i++)
        cout << words[i] << " ";
    return 0;
}
