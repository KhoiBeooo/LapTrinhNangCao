#include<iostream>
#include<iomanip>
#include<algorithm>
#include<set>
using namespace std;

int main() {
    set <int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }
    for (int x : s) cout << x << " ";
    return 0;
}