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
const int N=100000;
const int LN=LLONG_MAX/10;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vi V(n);
    for(int i=0;i<n;i++)cin>>V[i];

    int sol=1;
    vi cont(N*3);
    cont[V[1]+N]=1;
    for(int j=2;j<n;j++){
        sol=(sol-cont[N])*2+cont[N];
        sol%=mod;
        vi necont(N*3,0);
        for(int i=-100000;i<=N;i++){
            if(V[j]-i<-100000 or V[j]+i>100000)continue;
            necont[(V[j]-i)+N]+=cont[i+N];
            if(i==0)continue;
            necont[(V[j]+i)+N]+=cont[i+N];
        }
        cont=necont;
    }
    cout<<sol;
}

