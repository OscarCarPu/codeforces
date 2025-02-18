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
#define vvb vector<vb>
#define si set<int>
#define mii map<int,int>

const int MOD=1e9+7;
const int N=1e4+1;
const int LN=LLONG_MAX/10;
vb B;
vvi G;
void dfs(int u){
    B[u]=true;
    for(int v : G[u]){
        if(!B[v])dfs(v);
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,l,r;
    cin>>n>>l>>r;
    int cnt=0;
    G=vvi (n);
    B=vb(n,false);
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(!B[i]){
            cnt++;
            dfs(i);
        }
    }
    if(cnt%2)cout<<"Alice\n";
    else cout<<"Bob\n";
}

