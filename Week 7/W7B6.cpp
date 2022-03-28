#include<bits/stdc++.h>
using namespace std;

class Student {
  public:
   string name;
   int roll_no;
   Student ( string _name, int _no){
       name=_name;
       roll_no = _no;
   }
   void inRa (){
       cout << roll_no << " " << name;
   } 
};

int main(){
   string s;
   int a;
   cin >> s >> a;
   Student Peter(s,a);
   Peter.inRa();
    return 0;
}
