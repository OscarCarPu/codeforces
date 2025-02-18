#include <bits/stdc++.h>
using namespace std;
#define int long long
bool dp[51];
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    dp[1]=false;
    for(int i=2;i<51;i++){
        bool x=false;
        for(int j=1;j<i;j++){
            if(dp[j]==dp[i-j])x=true;
        }
        dp[i]=x;
    }
    while(t--){
        int n;
        cin>>n;
        bool s=true;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s^=dp[x];
        }
        if(!s)cout<<"errorgorn\n";
        else cout<<"maomao90\n";
    }
}