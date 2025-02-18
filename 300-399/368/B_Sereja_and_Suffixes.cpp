#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> V(n),dp(n);
    for(int i=0;i<n;i++)cin>>V[i];
    reverse(V.begin(),V.end());
    set<int> S;
    for(int i=0;i<n;i++){
        S.insert(V[i]);
        dp[i]=S.size();
    }
    reverse(dp.begin(),dp.end());
    while(m--){
        int x;
        cin>>x;
        cout<<dp[x-1]<<"\n";
    }
}