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

const int mod=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vvi G(n,vi(n,0));
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        G[u][v]=1;
    }
    freopen("out.txt","w",stdout);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<G[i][j]<<",";
        }
        cout<<"\n";
    }
}