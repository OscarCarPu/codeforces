#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define vb vector<bool>
int cost=0;
vvi G;
vi p;
int md;
int dfs(int u){
    int mx=0;
    for(int v : G[u]){
        mx=max(mx,dfs(v));
    }
    if(mx==md-1 and p[u]!=0){
        cost++;
        return 0;
    }
    else return mx+1;
}
const int mod=998244353;
struct edge{
    int u,v,w;
};
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int mcm(int a,int b){
    return (a*b)/(gcd(a,b));
}
int poW(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a,p/2)*(p%2==1?a:1);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int total=t;
    while(t--){
        int n,k;
        cin>>n>>k;
        G=vvi(n);
        p=vi(n,0);
        for(int i=1;i<n;i++){
            int u;
            cin>>u;
            u--;
            G[u].push_back(i);
            p[i]=u;
        }
        int low=1,high=n-1,res=high;
        while(low<=high){
            int mid=(low+high)/2;
            md=mid;
            cost=0;
            dfs(0);
            if(cost<=k){
                res=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        cout<<res<<"\n";
    }
}