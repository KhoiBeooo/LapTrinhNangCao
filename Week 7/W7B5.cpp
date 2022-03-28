#include<bits/stdc++.h>
using namespace std;

class HCN {
  public:
    int chieuDai, chieuRong;
    HCN ( int _chieuDai, int _chieuRong){
        chieuDai=_chieuDai;
        chieuRong=_chieuRong;
    }
    int returnArea() {
        return chieuDai*chieuRong;
    }
};

int main(){
   int a,b;
   cin >> a >> b;
   HCN n(a,b);
  cout << n.returnArea();
     
    return 0;
}