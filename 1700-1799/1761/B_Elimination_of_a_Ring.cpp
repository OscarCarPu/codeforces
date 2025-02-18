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
int n;
int conv(int x){
    if(x<0)x+=n;
    x%=n;
    return x;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        vi V(n);
        for(int i=0;i<n;i++)cin>>V[i];
        if(n==2){
            cout<<"2\n";
            continue;
        }
        vvi dp(n,vi(n,0));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
            if(i){
                dp[i-1][i]=dp[i-1][i-1]+dp[i][i]+(V[i-1]==V[conv(i+1)] and V[i]==(V[conv(i-2)])?-1:0);
            }
        }
        for(int size=3;size<=n;size++){
            for(int i=0;i<n-size+1;i++){
                int aux=dp[i+1][i+size-2]+1;
                if(V[i]!=V[i+size-1] and V[i]!=V[conv(i+size)] and V[i+size-1]!=V[conv(i-1)] and size<n-1)aux++;
                dp[i][i+size-1]=max(dp[i][i+size-1],aux);
                for(int j=0;j<i+size-1;j++){
                    aux=dp[i][j]+dp[j+1][i+size-1];
                    if(V[j]==V[conv(i+size)] and V[j+1]==V[conv(i-1)] and size<n-1)aux--;
                    dp[i][i+size-1]=max(dp[i][i+size-1],aux);
                }
            }
        }
        int sol=0;
        for(int i=0;i<n;i++){
            sol=max(sol,dp[i][conv(i+n-1)]);
        }
        cout<<sol<<"\n";
    }
}