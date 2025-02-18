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
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vi V(n);
        for(int i=0;i<n;i++)cin>>V[i];
        sort(V.begin(),V.end());
        int pl=0,pr=-1;
        int sol=LN;
        int cnt=0;
        vi B(m+1,0);
        vvi fact(n);
        for(int i=0;i<n;i++){
            for(int j=1;j*j<=V[i];j++){
                if(V[i]%j==0){
                    if(V[i]/j==j){
                        if(j<=m)fact[i].push_back(j);
                        continue;
                    }
                    if(V[i]/j<=m)fact[i].push_back(V[i]/j);
                    if(j<=m)fact[i].push_back(j);
                }
            }
            sort(fact[i].begin(),fact[i].end());
        }
        while(pl<n){
            while(pr<n-1 and cnt<m){
                pr++;
                if(pr==n)break;
                for(int j : fact[pr]){
                    B[j]++;
                    if(B[j]==1)cnt++;
                }
                if(cnt==m)break;
            }
            if(pr==n)break;
            if(cnt==m)sol=min(sol,V[pr]-V[pl]);
            for(int j : fact[pl]){
                B[j]--;
                if(B[j]==0)cnt--;
            }
            pl++;
        }
        if(sol==LN)sol=-1;
        cout<<sol<<"\n";

    }
}