#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[n],k;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> k;
    a[n] = k;
    for (int i = 0; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
    for (int i = 0; i <= n; i++) cout << fixed << setprecision(2) << a[i] << " ";

    return 0;
}