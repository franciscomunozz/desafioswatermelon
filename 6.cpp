#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>v(n*2);
    for(int i = 0; i < v.size(); i++) v[i] = i;
    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 0) cout << v[i] << " ";
    }
}