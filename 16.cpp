#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    int a, b; cin >> a >> b;
    if(matrix[a][b] == 0) cout << "ESTA LIBRE";
    else cout << "OCUPADO";
}