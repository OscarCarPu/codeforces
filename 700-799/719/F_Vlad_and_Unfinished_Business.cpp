#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int N=2e5;
int V[N];
vector<vector<int>> G;
vector<bool> once,twice;
int sol;
void dfs(int i,int p=-1){
    for(int u : G[i]){
        if(u==p)continue;
        dfs(u,i);
        if(twice[u]){
            twice[i]=true;
        }
        if(once[u]){
            once[i]=true;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        sol=0;
        int x,y;
        cin>>x>>y;
        for(int i=0;i<k;i++)cin>>V[i];
        G=vector<vector<int>>(n);
        once=twice=vector<bool>(n,false);
        for(int i=0;i<k;i++){
            V[i]--;
            twice[V[i]]=true;
        }
        x--;
        y--;
        once[y]=true;
        for(int i=1;i<n;i++){
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        dfs(x);
        int ans=0;
        for(int i=0;i<n;i++){
            if(i==x)continue;
            if(once[i])ans++;
            else if(twice[i])ans+=2;
        }
        cout<<ans<<"\n";
    }
}