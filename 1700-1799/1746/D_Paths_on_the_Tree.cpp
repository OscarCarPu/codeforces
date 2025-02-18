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

const int mod=1e9+7;
const int N=2e5+1;

int fact[N],frev[N],s[N],l[N];
bool P[N];
vi primes;
vvi G;
vb B;

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int mcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int poW(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a%mod,p/2)*(p%2?a:1)%mod;
}
bool prime(int n){
    if(n<=1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
void initfact(){
    fact[0]=fact[1]=frev[0]=frev[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=i*fact[i-1]%mod;
        frev[i]=poW(fact[i],mod-2);
    }
}
int choose(int n,int k){
    if(n<k)return 0;
    return (fact[n]*frev[k]%mod)*frev[n-k]%mod;
}
void initPrimes(){
    memset(P,true,sizeof(P));
    P[0]=P[1]=false;
    for(int i=2;i<N;i++){
        if(P[i]){
            primes.push_back(i);
            for(int j=i*2;j<N;j+=i){
                P[j]=false;
            }
        }
    }
}
void resetdsu(){
    for(int i=0;i<N;i++){
        s[i]=1;
        l[i]=i;
    }
}
int find(int x){
    while(x!=l[x])x=l[x];
    return x;
}
bool same(int a,int b){
    return find(a)==find(b);
}
void unite(int a,int b){
    a=find(a);
    b=find(b);
    if(s[a]<s[b])swap(a,b);
    l[b]=a;
    s[a]+=s[b];
}
int sol=0;
vi S;
int dfs(int u,int x){
    //cerr<<u<<" ";
    sol+=S[u]*x;
    vi aux;
        
    for(int v : G[u]){
        aux.push_back(dfs(v,max(0LL,x/(int)G[u].size())));
    }
    //cerr<<"A";
    x%=max(1LL,(int)G[u].size());
    //if(u==0)cerr<<x<<" ";
    sort(aux.rbegin(),aux.rend());
    //cerr<<"B";
    for(int i=0;i<x;i++){
        //if(u==0)cerr<<aux[i]<<" ";
        sol+=aux[i];
    }
    //cerr<<"C";
    if(aux.size()==0)return S[u];
    if(x==aux.size())return aux[0]+S[u];
    return aux[x]+S[u];
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        G=vvi(n);
        sol=0;

        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            x--;
            G[x].push_back(i);
        }
        S=vi(n);
        for(int i=0;i<n;i++)cin>>S[i];
        dfs(0,k);
        cout<<sol<<"\n";
    }
}