#include<iostream>
using namespace std;

void rolate (int a[], int n){
    int x=a[0];
    for(int i=0; i<n; i++){
        a[i]=a[i+1];
    }
    a[n-1]=x;
}

int main(){
    int n,d; cin >> n >> d;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    while(d!=0){
        rolate(a,n);
        d--;
    }
    for(int i=0; i<n; i++) cout << a[i] << " ";
    return 0;
}