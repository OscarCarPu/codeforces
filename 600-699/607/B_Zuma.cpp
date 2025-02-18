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
    int n;
    cin>>n;
    vi V(n);
    for(int i=0;i<n;i++){
        cin>>V[i];
    }
    vvi dp(n,vi(n,LN));
    vvb P(n,vb(n,false));
    for(int i=0;i<n;i++){
        dp[i][i]=1;
        P[i][i]=true;
        if(i and V[i]==V[i-1]){
            dp[i-1][i]=1;
            P[i-1][i]=true;
        }
        if(i and V[i]!=V[i-1]){
            dp[i-1][i]=2;
        }
    }
    for(int size=3;size<=n;size++){
        for(int i=0;i<n-size+1;i++){
            if(V[i]==V[i+size-1]){
                P[i][i+size-1]=true;
                dp[i][i+size-1]=min(dp[i][i+size-1],dp[i+1][i+size-2]);
            }
            for(int j=i;j<i+size-1;j++){
                dp[i][i+size-1]=min(dp[i][i+size-1],dp[i][j]+dp[j+1][i+size-1]);
            }
        }
    }
    cout<<dp[0][n-1];
}