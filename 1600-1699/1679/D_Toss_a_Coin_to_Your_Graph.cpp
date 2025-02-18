#include <bits/stdc++.h>
using namespace std;
#define int long long
struct AA{
    int u,c,l;
};
struct f{
    bool operator()(AA const& a, AA const& b){
        return a.c>b.c;
    }
}; 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>G(n);
    vector<int> C(n);
    for(int i=0;i<n;i++)cin>>C[i];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        G[u].push_back(v);
    }
    priority_queue<AA,vector<AA>,f> Q;
    int sol=LLONG_MAX;
    for(int i=0;i<n;i++){
        AA aux;
        aux.u=i;
        aux.c=C[i];
        aux.l=1;
        int ans=LLONG_MAX;
        Q.push(aux);
        while(Q.size()){
            aux=Q.top();
            Q.pop();
            if(aux.l>=m*10 or aux.l==k){
                ans=aux.c;
                break;
            }
            for(int v : G[aux.u]){
                AA auxx;
                auxx.u=v;
                auxx.c=max(aux.c,C[v]);
                auxx.l=aux.l+1;
                Q.push(auxx);
            }
        }
        sol=min(sol,ans);
    }
    if(sol==LLONG_MAX)sol=-1;
    cout<<sol;
}