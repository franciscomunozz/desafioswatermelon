#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>num(2);
    for(int i = 0; i < num.size(); i++) cin >> num[i];
    bool feliz=false;
    while(feliz == false){
        int a = num[0]; int b = num[1];
        a*=a;
        b*=b;
        int resultado = a+b;
        if(resultado == 1) feliz = true;
        else {
            num[0] = resultado/10;
        }
    }
}