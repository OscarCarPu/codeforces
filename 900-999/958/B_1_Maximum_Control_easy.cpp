#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sol=n;
    vector<int> V(n,0);
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        V[u]++;
        V[v]++;
        if(V[u]==2)sol--;
        if(V[v]==2)sol--;
    }
    cout<<sol;
}