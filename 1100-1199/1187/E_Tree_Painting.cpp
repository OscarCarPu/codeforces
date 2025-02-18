#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define vb vector<bool>
#define vc vector<char>
#define vvc vector<vc>
#define vvb vector<vb>z
#define si set<int>
#define mii map<int,int>

const int mod=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
int dp[N],sz[N];
int ans=0;
vvi G;
void dfs(int u,int p=-1){
    sz[u]=1;
    dp[u]=0;
    for(int v : G[u]){
        if(v!=p){
            dfs(v,u);
            sz[u]+=sz[v];
            dp[u]+=dp[v];
        }
    }
    dp[u]+=sz[u];
}
void sol(int u,int p=-1){
    ans=max(ans,dp[u]);
    for(int v : G[u]){
        if(v==p)continue;
        dp[u]-=dp[v];
        dp[u]-=sz[v];
        sz[u]-=sz[v];
        sz[v]+=sz[u];
        dp[v]+=sz[u];
        dp[v]+=dp[u];
        sol(v,u);
        dp[v]-=dp[u];
        dp[v]-=sz[u];
        sz[v]-=sz[u];
        sz[u]+=sz[v];
        dp[u]+=sz[v];
        dp[u]+=dp[v];
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    G=vvi(n);
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dfs(0);
    sol(0);
    cout<<ans;
}

