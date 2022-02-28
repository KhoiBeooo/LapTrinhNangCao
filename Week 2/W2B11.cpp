#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
const int MAX_N = 1000;

int main() {
    int n; cin >> n;
    double sum = 0;
    double arrayX[MAX_N];
    for(int i = 0;i<n;i++){
        cin >> arrayX[i];
        sum += arrayX[i];
    }
    double mean = sum/n;
    double result =0;
    for(int i = 0;i<n;i++) result += pow(arrayX[i]-mean,2);
    cout << fixed << setprecision(2) << result/n;
    return 0;
}