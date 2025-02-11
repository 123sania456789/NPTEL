#include<iostream>
#include<malloc.h>
#include<string.h>
using namespace std;
class Test{
    char *s;
public:
    Test(char *s) : s(strdup(s)) {} //LINE-1
    ~Test(){ free(s); }           //LINE-2
    Test operators(const Test& m){ //LINE-3
        free(s);
        s = strdup(m.s);
        return *this;
    }
    void update(char* x){
        char* temp=(char*)malloc(strlen(s)+strlen(x)+2); 
        strcpy(temp,s);
        strcat(temp, " ");
        strcat(temp,x);
        free(s);
        s=temp;
    }
    void print(){
        cout << s << endl;
    }
};

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    Test *m1 = new Test(&str1[0]);
    Test *m2 = m1;
    m2->update(&str2[0]);
    m2->print();
    delete(m1);
    return 0;
}
