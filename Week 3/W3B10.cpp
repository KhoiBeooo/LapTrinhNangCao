#include<iostream>
using namespace std;

bool checkAlpha (string s );
bool checkSpecal (string s);

int main(){
    string s;
    getline(cin,s);
    if(checkAlpha(s)){
        if(checkSpecal(s)){
            cout << "Invalid username.";
        }
        else{
            if(s.length()>=6 && s.length()<=15){
                if(isdigit(s[0])) cout << "Invalid username.";
                else cout << "Valid username.";
            }
            else cout <<"Invalid username.";
        }
    }
    else cout << "Invalid username.";
    
    return 0;
}

bool checkAlpha (string s ){
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])) return true;
        else if(isdigit(s[i])) return true;
    }
    return false;
}
bool checkSpecal (string s){
     int countAlpha =0 ,countNumber=0, countSpecial =0;
    for(int i=0; i<s.length(); i++){
        if( isalpha(s[i])) countAlpha++;
        else if( isdigit(s[i])) countNumber++;
        else countSpecial++;
    }
    if(countSpecial==0) return false;
    else return true;
}