#include<iostream>
using namespace std;

int main(){
    int total, totalLegs;
    cin >> total >> totalLegs;
    bool flag = false;
    int numChicken=0;
    for(int i=0; i<=totalLegs/2; i++){
        if(i*2 + (total-i)*4 ==totalLegs){
            cout << "chicken = " << i << ", " << "dog = " << total-i;
            flag =true;
            break;
        }
    }
    if(flag==false) cout << "invalid";
    return 0;
}