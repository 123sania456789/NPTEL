#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, int> merge_order(map<string, int> od1, map<string, int> od2){
    map<string, int> final_od;
    for (map<string, int>::iterator it = od1.begin(); it != od1.end(); ++it)   
        final_od[it->first] = od1[it->first];    //LINE-1
    for (map<string, int>::iterator it = od2.begin(); it != od2.end(); ++it)   
        final_od[it->first] += od2[it->first];    //LINE-2
    return final_od;
}

void show(map<string, int> od){
    for (map<string, int>::iterator it = od.begin(); it != od.end(); ++it)    
        cout << it->first << " => " << it->second << endl;
}

int main() { 
    map<string, int> order1;
    map<string, int> order2;
    string item;
    int qty;
    for(int i = 0; i < 3; i++){
        cin >> item >> qty;
        order1[item] = qty;
    }
    for(int i = 0; i < 3; i++){
        cin >> item >> qty;
        order2[item] = qty;
    }
    
    map<string, int> final_order = merge_order(order1, order2); 
    show(final_order);	
    return 0;
}
