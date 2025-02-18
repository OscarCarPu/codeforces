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
        vpii sr(n);
        for(int i=0;i<n;i++){
            sr[i].first=V[i];
            sr[i].second=i;
        }
        sort(sr.begin(),sr.end());
        int sum=0;
        int can=0;
        for(int i=0;i<n;i++){
            sum+=sr[i].first;
            if(sum<=m){
                can++;
            }
        }
        int ans=can;
        if(can==n){
            cout<<"1\n";
            continue;
        }
        m-=V[can];
        sum=0;
        if(m<0){
            cout<<n-ans+1<<"\n";
            continue;
        }
        int ne=1;
        for(int i=0;i<n;i++){
            if(sr[i].second==can)continue;
            sum+=sr[i].first;
            if(sum<=m){
                ne++;
            }
        }
        if(ne==can)ans++;
        cout<<n-ans+1<<"\n";
    }
}

