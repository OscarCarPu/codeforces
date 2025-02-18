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
vvpii GSCC;
vvpii G,Gt;
vb B;
vi tr;
mii M;
void dfs(int u){
    B[u]=true;
    for(auto x : G[u]){
        int v=x.first;
        if(!B[v])dfs(v);
    }
    tr.push_back(u);
}
int idx=0;
vi in;
void dfst(int u){
    B[u]=true;
    M[u]=idx;
    for(auto x : Gt[u]){
        int v=x.first;
        if(!B[v])dfst(v);
        else if(M[v]!=M[u]){
            //cout<<v<<" "<<u<<endl;
            GSCC[M[v]].push_back({M[u],x.second});
            in[M[u]]++;
        }
    }
}
struct edge{
    int u,v,w;
};
bool comp(edge a,edge b){
    return a.w<b.w;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        G=vvpii(n);
        Gt=vvpii(n);
        GSCC=vvpii(n);
        B=vb(n,false);
        idx=0;
        in=vi(n,0);
        M.clear();
        for(int i=0;i<m;i++){
            int u,v,w;
            cin>>u>>v>>w;
            u--;
            v--;
            G[u].push_back({v,w});
            Gt[v].push_back({u,w});
        }
        for(int i=0;i<n;i++){
            if(!B[i])dfs(i);
        }
        B=vb(n,false);
        reverse(tr.begin(),tr.end());
        for(int i=0;i<n;i++){
            if(B[tr[i]])continue;
            dfst(tr[i]);
            idx++;
        }
        vector<edge> pos;
        int cnt=0;
        for(int i=0;i<idx;i++){
            //cout<<in[i]<<" ";
            if(in[i]==0){
                cnt++;
                for(auto x : GSCC[i]){
                    int v=x.first;
                    int w=x.second;
                    edge aux;
                    aux.u=i;
                    aux.v=v;
                    aux.w=w;
                    pos.push_back(aux);
                }
            }
        }
        cout<<endl;
        sort(pos.begin(),pos.end(),comp);
        int sol=0;
        for(auto x : pos){
            if(cnt<=1)break;
            if(in[x.u]==0){
                sol=x.w;
                in[x.u]++;
                in[x.v]--;
                if(in[x.v]!=0)cnt--;
            }
        }
        if(cnt>1)cout<<"-1\n";
        else cout<<sol<<"\n";
    }
}

