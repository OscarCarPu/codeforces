#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int sol=0;
    int n,k;
    cin>>n>>k;
    int aux=1;
    int bef;
    cin>>bef;
    for(int i=1;i<n;i++){
        int act;
        cin>>act;
        if(act==bef){
            sol=max(sol,aux);
            aux=1;
        }
        else aux++;
        bef=act;
    }
    sol=max(sol,aux);
    cout<<sol;
}