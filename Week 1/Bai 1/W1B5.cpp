#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float a,f;
    cin >> a;
    f = a*1.8 + 32;
     cout << fixed << setprecision(2) << f;
    return 0;
}