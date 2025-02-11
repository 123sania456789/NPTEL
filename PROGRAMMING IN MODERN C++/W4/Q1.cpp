#include<iostream>
using namespace std;
class Database{
    int id;
    static Database *ins;                   //LINE-1
    Database(int i) : id(i) {}
    public:
        int getIns(){ return id; }
        static Database* createIns(int i){      //LINE-2
            if(!ins)
                ins = new Database(i);
            return ins;
        }
        ~Database();
};
Database *Database::ins = 0;                
void fun(int i){
    Database *s = Database::createIns(i);   //LINE-3
    cout << s->getIns();
}

Database::~Database(){ cout << id; }
int main(){
    int a,b;
    cin >> a >> b;
    Database *s = Database::createIns(a);
    cout << s->getIns();
    fun(b);
    return 0;
}
