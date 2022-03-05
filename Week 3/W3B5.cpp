#include<iostream>
using namespace std;

bool check(int a[], int n);

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    if (check(a, n)) cout << "Symmetric array.";
    else cout << "Asymmetric array.";

}
bool check(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) return false;
    }
    return true;
}
