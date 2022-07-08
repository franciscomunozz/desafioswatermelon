#include<bits/stdc++.h>
using namespace std;

int main(){
    int M, N, aux = 0, aux2 = 1239384;
    cin >> M >> N;
    int mountains[M][N];
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cin >> mountains[i][j];
            if(mountains[i][j] > aux){
               aux = mountains[i][j];
            }
            else if(mountains[i][j] < aux2){
               aux2 = mountains[i][j];
            }
        }
    }
    cout << aux - aux2 << endl;
}
