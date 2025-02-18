#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,p;
    cin>>n>>p;
    vector<int> S;
    int dp[p];
    for(int i=0;i<p;i++){
        dp[i]=0;
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        S.push_back(x);
    }
    sort(S.begin(),S.end());
    set<int> Se;
    for(int i=0;i<n;i++){
        int x=S[i];
        int cnt=0;

        bool can=false;
        while(x>0){
            if(x%2){
                cnt++;
                x/=2;
                if(Se.count(x) and can==false){
                    cnt=-1;
                    break;
                }
            }
            else if(x%4==0){
                cnt+=2;
                x/=4;
                if(Se.count(x) and can==false){
                    cnt=-1;
                    break;
                }
            }
            else{
                cnt++;
                x/=2;
                can=true;
            }
        }
        if(cnt!=-1 or can){
            if(cnt-1<p)dp[cnt-1]++;
        }
        Se.insert(S[i]);
    }
    int sol=0;
    if(p>0){
        sol+=dp[0];
        sol%=mod;
    }
    if(p>1){
        dp[1]+=dp[0];
        dp[1]%=mod;
        sol+=dp[1];
        sol%=mod;
    }
    for(int i=2;i<p;i++){
        dp[i]+=dp[i-1]+dp[i-2];
        dp[i]%=mod;
        sol+=dp[i];
        sol%=mod;
    }
    //for(int i=0;i<p;i++)cout<<dp[i];
    cout<<sol;
}