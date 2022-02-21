#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

bool checkTamGiac(int a, int b, int c){
    if( a<b+c && b<a+c && c<a+b ) return true;
    else return false;
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(checkTamGiac(a,b,c)){
        double p=1.0*(a+b+c)/2;
        cout<< fixed  << setprecision(2) << sqrt(p*(p-a)*(p-b)*(p-c));
    }
    else cout << "invalid";
}