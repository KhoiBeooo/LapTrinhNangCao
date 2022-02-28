#include<iostream>
#include<math.h>
using namespace std;

bool soChinhPhuong (double n);
int main(){
    int a,b,c,d;
    cin >> a >> b;
    c=sqrt(a);
    d=sqrt(b);
    for(int i=c; i<=d; i++){
        if(i*i>=a && i*i<=b) cout << i*i << " ";
    }
    return 0;
}