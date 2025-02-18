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
vi V,ind;
vvi dp,s;
bool comp(int a,int b){
    return V[a]>V[b]
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,p,k;
    cin>>n>>p>>k;
    dp=vvi(n+1,vi((1<<7)+1,-1));
    V=vi(n+1);
    s=vvi(n+1,vi(p));
    ind=vi(n+1);
    for(int i=1;i<=n;i++)cin>>V[i];
    for(int i=1;i<=n;i++){
        for(int j=0;j<p;j++){
            cin>>s[i][j];
        }
    }
    for(int i=1;i<=n;i++)ind[i]=i;
    sort(ind.begin(),ind.end(),comp);
    dp[0][0]=0;
    for(int i=1;i<=n;i++){
        int x=ind[i];
        for(int bit=0;bit<(1<<p);bit++){
            int cnt=0;
            for(int j=0;j<p;j++){
                if((bit&(1<<j)))cnt++;
            }
            int z=(i-1)-cnt;
            if(z<k){
                if(dp[i-1][bit]!=-1)dp[i][bit]=dp[i-1][bit]+V[x];
            }
            else{
                if(dp[i-1][bit]!=-1)dp[i][bit]=dp[i-1][bit];
            }
            for(int j=0;j<p;j++){
                if((bit&(1<<j)) and dp[i-1][(bit^(1<<j))]!=-1){
                    int z
                }
            }
        }
    }
}