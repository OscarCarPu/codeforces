#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> G;
int sol=0;
vector<int> S;
vector<int> ans;
int n;
void dfs(int u,int p=0,int s=0){
    sol+=s;
    S[u]=1;
    for(int v : G[u]){
        if(v!=p){
            dfs(v,u,s+1);
            S[u]+=S[v];
        }
    }
}
void dfsans(int u,int p=0){
    for(int v : G[u]){
        if(v!=p){
            int s1=S[v];
            int s2=n-S[v];
            ans[v]=ans[u]-s1+s2;
            dfsans(v,u);
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    G=vector<vector<int>>(n);
    S=vector<int>(n,0);
    vector<pair<pair<int,int>,int>> edges;
    for(int i=0;i<n-1;i++){
        int u,v,x;
        cin>>u>>v>>x;
        u--;
        v--;
        x--;
        G[u].push_back(v);
        G[v].push_back(u);
        edges.push_back({{u,v},x});
    }
    dfs(0);
    ans=vector<int>(n,0);
    
    ans[0]=sol;
    cout<<sol<<endl;
    dfsans(0);
    
    for(int i=1;i<n;i++){
        sol+=ans[i];
        cout<<ans[i]<<endl;
    }
    sol/=2;
    vector<bool>B(n,false);
    cout<<sol<<endl;
    for(auto aux : edges){
        int u=aux.first.first;
        int v=aux.first.second;
        int x=aux.second;
        if(B[x]==true){
            int m=min(S[u],S[v]);
            sol-=m*(n-m);
        }
        B[x]=true;
    }
    cout<<sol;
}