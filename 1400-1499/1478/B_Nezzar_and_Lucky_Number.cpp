#include <bits/stdc++.h>
using namespace std;
#define int long long
bool f(int n,int x){
    while(n>0){
        if(x==n%10)return true;
        n/=10;
    }
    return false;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int q,d;
    cin>>q>>d;
    vector<bool> dp(d*10,false);
    dp[d]=true;
    for(int i=d+1;i<d*10;i++){
        if(f(i,d)){
            dp[i]=true;
            continue;
        }
        for(int j=d;j<i;j++){
            if(dp[j] and dp[i-j]){
                dp[i]=true;
                break;
            }
        }
    }
    while(q--){
        int x;
        cin>>x;
        if(x>=10*d or dp[x]){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    }
}