#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> V(n),dp(n);
        for(int i=0;i<n;i++)cin>>V[i];
        int sol=0;
        for(int i=n-1;i>=0;i--){
            dp[i]=V[i];
            if(i+V[i]<n)dp[i]+=dp[i+V[i]];
            sol=max(sol,dp[i]);
        }
        cout<<sol<<"\n";
    }
}