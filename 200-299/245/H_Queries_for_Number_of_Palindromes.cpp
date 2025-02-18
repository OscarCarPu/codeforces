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
    string s;
    cin>>s;
    int n=s.length();
    vvi dp(n,vi(n,0));
    vvb P(n,vb(n,false));
    for(int i=0;i<n;i++){
        dp[i][i]=1;
        P[i][i]=true;
        if(i>0){
            if(s[i]==s[i-1]){
                P[i-1][i]=true;
                dp[i-1][i]=3;
            }
            else{
                dp[i-1][i]=2;
            }
        }
    }
    for(int size=3;size<=n;size++){
        for(int i=0;i<n-size+1;i++){
            if(s[i]==s[i+size-1] and P[i+1][i+size-2]){
                P[i][i+size-1]=true;
                dp[i][i+size-1]=1;
            }
            dp[i][i+size-1]+=(dp[i][i+size-2]+dp[i+1][i+size-1]-dp[i+1][i+size-2]);
        }
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        cout<<dp[l][r]<<"\n";
    }
}