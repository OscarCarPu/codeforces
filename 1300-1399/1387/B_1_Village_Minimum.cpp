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
int sol[N];
vvi G;
int dfs(int u,int p=-1){
    int cnt=0;
    for(int v : G[u]){
        if(v!=p)cnt+=dfs(v,u);
    }
    if(p>=0 and sol[u]==u){
        sol[u]=sol[p];
        sol[p]=u;
        cnt+=2;
    }
    else if(p<0 and sol[u]==u){
        sol[u]=sol[G[u][0]];
        sol[G[u][0]]=u;
        cnt+=2;
    }
    return cnt;
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
        sol[i]=i;
    }
    cout<<dfs(0,-1)<<"\n";
    for(int i=0;i<n;i++)cout<<sol[i]+1<<" ";
}

