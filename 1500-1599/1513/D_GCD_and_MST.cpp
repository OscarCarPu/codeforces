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
        int n,p;
        cin>>n>>p;
        vi V(n);
        for(int i=0;i<n;i++)cin>>V[i];
        vb con(n,false);
        vpii a(n);
        for(int i=0;i<n;i++)a[i]={V[i],i};
        sort(a.begin(),a.end());
        int ans=0;
        for(auto x : a){
            int cur=x.first;
            int i=x.second;
            if(cur>=p)break;
            while(i>0){
                if(con[i-1])break;
                if(V[i-1]%cur==0){
                    con[i-1]=true;
                    ans+=cur;
                    i--;
                }
                else break;
            }
            i=x.second;
            while(i<n-1){
                if(con[i])break;
                if(V[i+1]%cur==0){
                    con[i]=true;
                    ans+=cur;
                    i++;
                }
                else break;
            }
        }
        for(int i=0;i<n-1;i++){
            if(!con[i])ans+=p;
        }
        cout<<ans<<"\n";
    }
}

