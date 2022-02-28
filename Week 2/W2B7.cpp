#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    int n; cin >> n;
    double result = 0;
    const double e = 2.718281828459045235360287471352;
    long long i = 1;
    double tmp = 1;
    while(tmp >= 0.001){
        result += tmp;
        tmp = tmp*n/i;
         i++;
    }
    result += tmp;
    cout << fixed << setprecision(4) << result;
    return 0;
}