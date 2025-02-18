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

const int MOD=998244353;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
int inv[N];
void calcinv(){
    inv[0]=inv[1]=1;
    for(int i=2;i<N;i++){
        inv[i]=MOD-MOD/i*inv[MOD%i]%MOD;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        string a,b;
        cin>>n>>a>>b;
        int s=0;
        int x=1,y=1;
        for(int i=0;i<n;i++){
            s+=a[i]!=b[i];
        }
        for(int i=n;i>=2;i--){
            x=((n*inv[i]%MOD+(n*inv[i]%MOD-1)*x%MOD)%MOD+MOD)%MOD;
            y=(y+(i<=s)*x)%MOD;
        }
        if(s==0)cout<<0<<endl;
        else cout<<((x*n+n+y-x)%MOD+MOD)%MOD-1<<endl;
    }
}

