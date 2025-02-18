#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int sol=0;
    for(int i=0;i<n;i++){
        int aux=1e9;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            aux=min(aux,x);
        }
        sol=max(sol,aux);
    }
    cout<<sol;
}