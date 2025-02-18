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

const int MOD=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,d;
        cin>>n>>m>>d;
        vi p(n),a(m);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            x--;
            p[x]=i;
        }
        int mi=LN;
        bool all=true;
        for(int i=0;i<m;i++)cin>>a[i],a[i]--;
        for(int i=0;i<m-1;i++){
            all = all and (p[a[i]]<p[a[i+1]] and p[a[i+1]]<=p[a[i]]+d);
            mi=min(mi,p[a[i+1]]-p[a[i]]);
            mi=min(mi,(d+1<n?abs((d+1)-(p[a[i+1]]-p[a[i]])):LN));
        }
        if(!all)mi=0;
        cout<<mi<<"\n";
    }
}

