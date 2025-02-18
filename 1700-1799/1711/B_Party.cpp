#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int> 
#define vvi vector<vi>
#define vb vector<bool>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int c[n];
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i],c[i]=0;
        vvi G(n);
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            c[u]++;
            c[v]++;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        if(m%2==0){
            cout<<"0\n";
        }
        else{
            int sol=LLONG_MAX;
            for(int i=0;i<n;i++){
                if(c[i]%2){
                    sol=min(sol,a[i]);
                }
                else{
                    for(int u : G[i]){
                        if(c[u]%2)continue;
                        sol=min(sol,a[i]+a[u]);
                    }
                }
            }
            cout<<sol<<"\n";
        }
    }
}