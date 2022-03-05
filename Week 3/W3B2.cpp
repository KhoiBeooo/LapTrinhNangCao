#include<iostream>
#include<iomanip>
#include<algorithm>
#include<set>
using namespace std;

int main() {
    int n;
    cin >> n;
    double marks[n];
    for (int i = 0; i < n; i++) cin >> marks[i];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (marks[i] < marks[j])swap(marks[i], marks[j]);
        }
    }
    for (int i = 0; i < n; i++) cout << fixed << setprecision(2) << marks[i] << " ";
    return 0;
}