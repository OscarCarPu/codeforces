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
void dfs(int u){
    B[u]=true;
    for(int v : G[u]){
        if(!B[v]){
            dfs(v);
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f=-1;
    reverse(s.begin(),s.end());
    while(s.back()=='0'){
        s.pop_back();
        n--;
    }
    reverse(s.begin(),s.end());
    bool z=false;
    for(int i=0;i<n;i++){
        if(s[i]=='1')z=true;
        if(s[i]=='0' and z){
            f=i;
            break;
        }
    }
    string sol=s;
    for(int i=1;i<=f;i++){
        string auxx=s;
        for(int j=0;j<n;j++){
            if(s[j]=='1'){
                auxx[j]='1';
            }
            else if(j-i>=0 and s[j-i]=='1'){
                auxx[j]='1';
            }
        }
        for(int i=0;i<n;i++){
            if(sol[i]=='0' and auxx[i]=='1'){
                sol=auxx;
                break;
            }
            else if(sol[i]=='1' and auxx[i]=='0'){
                break;
            }
        }
    }
    if(n==0)sol="0";
    cout<<sol<<" ";
}