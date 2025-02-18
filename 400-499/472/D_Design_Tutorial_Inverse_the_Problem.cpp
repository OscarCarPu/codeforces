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
int cost[N],d[N],s[N],l[N],tin[N],tout[N];
vvpii G;
vvi p;
int t=0;
void init(){
    for(int i=0;i<N;i++){
        l[i]=i;
        s[i]=1;
        cost[i]=0;
    }
}
void dfs(int u,int D=0,int P=0){
    d[u]=D;
    tin[u]=t++;
    for(auto x : G[u]){
        int v=x.first;
        int w=x.second;
                if(P==v)continue;

        p[v][0]=u;
        cost[v]=cost[u]+w;
        dfs(v,D+1,u);
    }
    tout[u]=t++;
}
int find(int x){
    if(x==l[x])return x;
    return l[x]=find(l[x]);
}
bool same(int a,int b){
    return find(a)==find(b);
}
void unite(int a,int b){
    a=find(a);
    b=find(b);
    if(s[a]>s[b])swap(a,b);
    s[a]+=s[b];
    l[b]=a;
}

bool comp(pair<pii,int> a,pair<pii,int> b){
    return a.second<b.second;
}
bool ances(int u,int v){
    return tin[u]<=tin[v] and tout[u]>=tout[v];
}
int lca(int u,int v){
    if(ances(u,v))return u;
    if(ances(v,u))return v;
    for(int i=30;i>=0;i--){
        if(!ances(p[u][i],v))u=p[u][i];
    }
    return p[u][0];
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    //cerr<<0;
    vvi adj(n,vi(n));
    bool pos=true;
    vector<pair<pii,int>> edges;
    p=vvi(n,vi(31,-1));
    for(int i=0;i<n;i++){
        //cerr<<i<<endl;
        for(int j=0;j<n;j++){
            //cerr<<" "<<j;
            cin>>adj[i][j];
            //cerr<<"read\n";
        }
        
    }
    //cerr<<1;
    G=vvpii (n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==j and adj[i][j]!=0) or (adj[i][j]!=adj[j][i]))pos=false;
            if(j>i and adj[i][j]!=0)edges.push_back({{i,j},adj[i][j]});
        }
    }

    init();
    //cerr<<2;
    int cont=1;
    sort(edges.begin(),edges.end(),comp);
    for(auto x : edges){
        int u=x.first.first;
        int v=x.first.second;
        int w=x.second;
        if(!same(u,v)){
            unite(u,v);
            G[u].push_back({v,w});
            G[v].push_back({u,w});
            cont++;
            if(cont==n)break;
        }
    }
    if(cont!=n){
        cout<<"NO";
        return 0;
    }
    //cerr<<3;
    dfs(0);
    //cerr<<4;
    for(int i=1;i<=30;i++){
        for(int j=0;j<n;j++){
            if(p[j][i-1]!=-1)p[j][i]=p[p[j][i-1]][i-1];
        }
    }
    //cerr<<5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if(adj[i][j]!=cost[i]+cost[j]-cost[lca(i,j)]*2)pos=false;
        }
    }
    //cerr<<6;
    if(pos)cout<<"YES";
    else cout<<"NO";
}

