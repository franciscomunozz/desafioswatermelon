#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < v.size(); i++) cin >> v[i];
    sort(v.begin(), v.end());
    int searched; cin >> searched;
    if(binary_search(v.begin(),v.end(), searched)) {
        cout << "SE ENCONTRO!";
    } else cout << "NO SE ENCONTRO :(";
}