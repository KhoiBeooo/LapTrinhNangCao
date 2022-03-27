#include <bits/stdc++.h>

using namespace std;

class customer {
    public:
        string name;
        int accountnumber;
        double balance;

        customer(string _name, int _accountnumber, double _balance) : name(_name), accountnumber(_accountnumber), balance(_balance) {}

        void add100() {
            this->balance += 100;
        }
};

void printnameofcustomerbalancebelow200(const vector<customer>& customers) {
    for(auto i : customers) {
        if(i.balance < 200) {
            cout << i.name << "\n";
        }
    }
}

void add100tobalancemorethan1000(vector<customer>& customers) {
    for(auto i : customers) {
        if(i.balance > 1000) {
            cout << i.name << " " << i.accountnumber << " " << i.balance+100 << " +100$ \n";
        }
        else {
            cout << i.name << " " << i.accountnumber << " " << i.balance << " +0$ \n";
        }
    }
}

int main() {
    customer student1("student1", 1, 10000);
    customer student2("mai anh", 2, 199);
    vector<customer> customers;
    customers.push_back(student1);
    customers.push_back(student2);
    printnameofcustomerbalancebelow200(customers);
    add100tobalancemorethan1000(customers);
    return 0;
}