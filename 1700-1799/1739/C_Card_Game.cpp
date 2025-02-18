#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define vb vector<bool>
const int mod=998244353;
const int N=61;
int fact[N],inv_fact[N];
struct edge{
    int u,v,w;
};
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int mcm(int a,int b){
    return (a*b)/(gcd(a,b));
}
int poW(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a%mod,p/2)*(p%2==1?a:1)%mod;
}
int choose(int n,int k){
    if(n<k)return 0;
    return (fact[n]*inv_fact[n-k]%mod)*inv_fact[k]%mod;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    fact[0]=fact[1]=inv_fact[0]=inv_fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i%mod;
        inv_fact[i]=poW(fact[i],mod-2);
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int w=0,l=0;
        int mn=n;
        for(int i=0;i<n/2;i++){
            if(i%2){
                l+=choose(mn-1,mn/2-1);
                w+=choose(mn-2,mn/2-2);
                l%=mod;
                w%=mod;
                mn-=2;
            }
            else{
                w+=choose(mn-1,mn/2-1);
                l+=choose(mn-2,mn/2-2);
                w%=mod;
                l%=mod;
                mn-=2;
            }
        }
        cout<<w<<" "<<l<<" 1\n";
    }
}