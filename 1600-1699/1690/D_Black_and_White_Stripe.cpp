#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> dp(n+1,0);
        for(int i=1;i<=n;i++){
            if(s[i-1]=='W')dp[i]++;
            dp[i]+=dp[i-1];
        }
        int sol=k;
        for(int i=k;i<=n;i++){
            sol=min(sol,dp[i]-dp[i-k]);
        }
        cout<<sol<<"\n";
    }
}