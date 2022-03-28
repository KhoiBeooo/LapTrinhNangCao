#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
     string s;
     getline(cin,s);
     string n="";
     n+=s[0];
     for(int i=1; i<s.length();i++){
         if(s[i]==s[i-1]){
             n+="*";
             n+=s[i];
         }
         else{
             n+=s[i];
         }
     }
     cout << n;

    return 0;
}