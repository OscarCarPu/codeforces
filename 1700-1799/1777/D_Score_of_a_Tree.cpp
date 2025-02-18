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
vvi G;
int sol=0;
int n;
int poW(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a%mod,p/2)*(p%2?a:1)%mod;
}
int dfs(int u,int p){
    int m=1;
    for(int v : G[u]){
        if(v!=p)m=max(m,dfs(v,u)+1);
    }
    sol+=(poW(2,n-1)*m)%mod;
    sol%=mod;
    return m;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        G=vvi(n);
        sol=0;
        for(int i=1;i<n;i++){
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        dfs(0,0);
        cout<<sol<<"\n";
    }
}

