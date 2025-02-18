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
#define vvb vector<vb>z
#define si set<int>
#define mii map<int,int>

const int mod=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
int fact[N];
void initfact(){
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i%mod;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    initfact();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<((((n*(n-1)/2)*2)%mod)*fact[n])%mod<<"\n";
    }
}

