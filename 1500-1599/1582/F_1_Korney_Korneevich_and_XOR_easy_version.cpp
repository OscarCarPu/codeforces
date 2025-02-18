#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int dp[513];
    for(int i=0;i<513;i++){
        dp[i]=-1;
    }
    dp[0]=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        for(int j=0;j<513;j++){
            if(dp[j]!=-1 and dp[j]<x){
                if(dp[j^x]==-1){
                    dp[j^x]=x;
                }
                else{
                    dp[j^x]=min(dp[j^x],x);
                }
            }
        }
    }
    vector<int> sol;
    for(int i=0;i<513;i++){
        if(dp[i]>=0)sol.push_back(i);
    }
    cout<<sol.size()<<"\n";
    for(int i : sol)cout<<i<<" ";
}