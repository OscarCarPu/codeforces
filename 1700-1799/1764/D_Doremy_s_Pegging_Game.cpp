#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define vb vector<bool>
#define vc vector<char>
#define vvc vector<vc>
#define vvb vector<vb>
#define si set<int>
#define mii map<int,int>

const int N=5001;
const int LN=LLONG_MAX/10;
int mod;
int fact[N],frev[N];
int poW(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a%mod,p/2)*(p%2?a:1)%mod;
}
void initfact(){
    fact[0]=frev[0]=frev[1]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=i*fact[i-1]%mod;
    }
    frev[N-1]=poW(fact[N-1],mod-2);
    for(int i=N-2;i>=2;i--){
        frev[i]=frev[i+1]*(i+1)%mod;
    }
}
int choose(int n,int m){
    if(n<m or n<0 or m==0)return 0;
    return (fact[n]*frev[m]%mod)*frev[n-m]%mod;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n>>mod;
    initfact();
    int sol=0;
    if(n%2==0){
        sol=(n*poW(2,(n-2)/2)%mod)*fact[(n-2)/2]%mod;
        for(int i=1;i<=(n-2)/2;i++){
            sol+=((n*poW(2,(n-2)/2-i)%mod)*choose((n-2)/2,i)%mod)*fact[(n-2)/2+i]%mod;
        }
    }
    else{
        sol=
        
    }
    cout<<sol;
}