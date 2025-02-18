#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int mod=1e9+7;
const int N=5e5;
int dp[N][4][3];//n, nº of ?, letter (a,0;b,1;c,2);
int poW(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a%mod,p/2)*(p%2?a:1LL)%mod;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int n;
    cin>>n;
    cin>>s;
    int q=0;
    if(s[0]=='a')dp[0][0][0]++;
    if(s[0]=='?'){
        dp[0][1][0]++;
        q++;
    }
    for(int i=1;i<n;i++){
        char e=s[i];
        if(e=='a'){
            dp[i][0][0]++;
        }
        if(e=='b'){
            for(int k : {0,1}){
                dp[i][k][1]+=dp[i-1][k][0];
                dp[i][k][1]%=mod;
            }
        }
        if(e=='c'){
            for(int k : {0,1,2}){
                dp[i][k][2]+=dp[i-1][k][1];
                dp[i][k][2]%=mod;
            }
        }
        if(e=='?'){
            q++;
            dp[i][1][0]++;
            for(int k : {0,1}){
                dp[i][k+1][1]+=dp[i-1][k][0];
                dp[i][k+1][1]%=mod;
            }
            for(int k : {0,1,2}){
                dp[i][k+1][2]+=dp[i-1][k][1];
                dp[i][k+1][2]%=mod;
            }
        }
        for(int k1 : {0,1,2,3}){
            for(int k2 : {0,1,2}){
                dp[i][k1][k2]+=dp[i-1][k1][k2];
                dp[i][k1][k2]%=mod;
            }
        }
    }
    int sol=0;
    for(int k : {0,1,2,3}){
        sol+=dp[n-1][k][2]*poW(3,q-k);
        sol%=mod;
    }
    cout<<sol;
}
/*

3^2

a 0

a 1
ab 1

ab 0
ab 1

a 1
ab 1
ab 2
abc 2 1
abc 1 3
abc 2 1

abc 1 3
abc 0 9
abc 1 3
abc 1 3
abc 2 1

*/