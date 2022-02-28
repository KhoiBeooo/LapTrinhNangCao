#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    double arr[1000];
    int lengthArr=0;
    for(int i=0; i<n ;i++){
        cin >> arr[i];
        lengthArr++;
    }
    for(int i=lengthArr-1; i>=0;i--){
        cout << fixed << setprecision(2) << arr[i] << " ";
    }
    
    return 0;
}