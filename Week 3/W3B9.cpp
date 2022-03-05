#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int countSpace=0;
    for(int i=0; i<=s.length();i++){
    	if(s[i]!=' ') break;
    	countSpace++;
	}
    string space =s.substr(0,countSpace);
    s= " "+ s + " ";
    vector <string> v;
     int start =0;
    for(int i=1; i<s.length(); i++){
        if( s[i] != ' ' && s[i-1] ==' ')start =i;
        
        if( s[i] != ' ' && s[i+1] ==' '){
            string a = s.substr(start, i-start+1);
            v.push_back(a);
        }
    }
    cout << space;
    for(int i=0; i<v.size() ;i++){
        cout << v[i] << " ";
    }
    
    return 0;
}