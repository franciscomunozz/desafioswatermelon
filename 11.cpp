#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>S;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        S.insert(x);
    }
    set<int>::iterator itr;
    itr = S.begin();
    itr++;
    cout << *itr << "\n";
}