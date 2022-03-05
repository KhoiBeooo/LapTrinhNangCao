#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin ,s);
    s = " " + s + " ";
    int start = 0;
    vector <string> v;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != ' ' && s[i-1] == ' ') start = i;

        if (s[i] != ' ' && s[i + 1] == ' ') {
            string a = s.substr(start, i - start + 1);
            v.push_back(a);
        }
    }
    cout << v.size();
}