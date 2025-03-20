#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class employee{
    private:
        string name;
        double salary;
    public:
        employee(string _name, double _salary) : name(_name), salary(_salary){}
        string getName() const{
            return name;
        }
        double getSalary() const{
            return salary;
        }
        friend ostream& operator<<(ostream& os, const employee& e);
};

ostream& operator<<(ostream& os, const employee& e){
    os << e.name << '-' << e.salary << endl;
    return os;
}

struct compareByName{
    bool operator()(const employee& e1, const employee& e2) const {
      return e1.getName() < e2.getName();
      }
};
 
struct compareBySalary{
    bool operator()(const employee& e1, const employee& e2) const {
      return e1.getSalary() < e2.getSalary();
      }
};


int main() {
    int n;              //number of employees
    cin >> n;
    vector<employee> emps;
    for(int i = 0; i < n; i++){
        string na;
        double sa;
        cin >> na >> sa;    //employee's name and salary
        employee e(na, sa);
        emps.push_back(e);
    }
    int t;              //sort option
    cin >> t;
    if(t == 1)
        sort(emps.begin(), emps.end(), compareByName());
    else if(t == 2)
        sort(emps.begin(), emps.end(), compareBySalary());
    for(vector<employee>::iterator p = emps.begin(); p != emps.end(); p++){
        cout << *p;
    }
    return 0;
}
