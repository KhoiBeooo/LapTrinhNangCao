#include <bits/stdc++.h>

using namespace std;

class student {
    public:
        int no, age;
        string name;
        double marks;
        student(int _no, string _name, int _age, double _marks): 
        no(_no), name(_name), age(_age), marks(_marks) {}
};

int main() {
    student hs1(1, "hs1", 19, 10);
    cout << hs1.no << " " << hs1.name << " " <<hs1.age << " " << hs1.marks << "\n";
}