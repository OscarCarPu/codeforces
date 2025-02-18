#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int N=101;
int frev[N],fact[N];
int poW(int a,int p){
    if(p==0)return 1;
    return poW(a*a%mod,p/2)*(p%2==1?a:1)%mod;
}
int choose(int n){
    if(n<2)return 0;
    return fact[n]*frev[n-2]%mod*frev[2]%mod;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    fact[0]=fact[1]=frev[0]=frev[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=i*fact[i-1]%mod;
        frev[i]=poW(fact[i],mod-2);
    }
    int sol=0;
    vector<int> Names(30,0);
    while(n--){
        string s;
        cin>>s;
        Names[s[0]-'a']++;
    }
    for(int i=0;i<30;i++){
        sol+=choose((Names[i]+1)/2);
        sol+=choose(Names[i]/2);
    }
    cout<<sol;
}