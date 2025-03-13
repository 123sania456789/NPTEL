#include<iostream>
#include<cstring>
#include<malloc.h>
using namespace std;
class String{
    char* _str;
public:
    String(char* str) : _str(str){} //LINE-1
    operator char*(){ //LINE-2

        char* t_str = (char*)malloc(sizeof(_str) + 7);
        strcpy(t_str, "Welcome ");
        strcat(t_str, _str);
        return t_str;
    }
};

int main(){
    char s[15];
    cin >> s;
    String st = static_cast<String>(s);
    cout << static_cast<char*>(st);
    return 0;
}
