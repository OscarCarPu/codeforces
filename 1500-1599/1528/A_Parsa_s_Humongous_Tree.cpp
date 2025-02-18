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
pii C[N];
vvi G;
int dp[N][2];
void dfs(int u,int p){
    dp[u][0]=dp[u][1]=0;
    for(int v : G[u]){
        if(v==p)continue;
        dfs(v,u);
        dp[u][0]+=max(dp[v][0]+abs(C[u].first-C[v].first),dp[v][1]+abs(C[u].first-C[v].second));
        dp[u][1]+=max(dp[v][0]+abs(C[u].second-C[v].first),dp[v][1]+abs(C[u].second-C[v].second));
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        G=vvi(n);
        for(int i=0;i<n;i++)cin>>C[i].first>>C[i].second;
        for(int i=1;i<n;i++){
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        dfs(0,0);
        cout<<max(dp[0][0],dp[0][1])<<"\n";
    }
}

