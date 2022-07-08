#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int stringsize = s.size();
    vector<char>text(stringsize);
    for(int i = 0; i < text.size(); i++){
        text[i] = s[i];
    }
    int a; cin >> a;
    cout << text[a-1];
}