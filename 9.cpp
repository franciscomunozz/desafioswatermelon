#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < v.size(); i++) cin >> v[i];
    int counter = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == '0' && v[i-1] == '1' && v[i+1] == '1'){
            counter++;
        }
    }
    cout << counter << "\n";
}