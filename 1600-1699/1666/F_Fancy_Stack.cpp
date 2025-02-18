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

const int mod=998244353;
const int N=5005;

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
    vvi comb(N-1000,vi(N-1000));
    comb[0][0]=1;
    for(int i=0;i<N-1001;i++){
        for(int j=0;j<N-1001;j++){
            comb[i+1][j]+=comb[i][j];
            comb[i+1][j]%=mod;
            comb[i][j+1]+=comb[i][j];
            comb[i][j+1]%=mod;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n),dp(n);
        int cnt=0;
        for(int i=0;i<n;i++)cin>>a[i];
        if(a[n-1]==a[n-2]){
            cout<<"0\n";
            continue;
        }
        cnt = 0;
	for(int i = n / 2; i >= 0; i --) dp[i] = 0;
	dp[0] = 1;
	for(int i=0;i<n-1;i++) {
		int j = i;
		while(j + 1 < n && a[j + 1] == a[j]) j ++;
		int l = j - i + 1; i = j;
		
		for(int j = n / 2; j >= 0; j --) if(dp[j]) {
			if(cnt >= 2 * j) dp[j + 1] = (dp[j + 1] +  dp[j] * comb[cnt - 2 * j][l - 1]) % mod;
			dp[j] =  dp[j] * comb[cnt - max(2 * j - 1, 0LL)][l] % mod;
		}
		cnt += l;
	}
        cout<<dp[n/2]<<"\n";
    }
}