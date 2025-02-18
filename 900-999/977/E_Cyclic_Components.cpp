#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>G;
vector<bool> mark;
bool cycle;
void dfs(int v){
    for(auto u : G[v]){
        if(mark[u]==false){
            mark[u]=true;
            dfs(u);
        }
    }
    if(G[v].size()!=2)cycle=false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    G=vector<vector<int>>(n);
    mark=vector<bool>(n,false);
    int sol=0;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(mark[i])continue;
        cycle=true;
        mark[i]=true;
        dfs(i);
        if(cycle)sol++;
    }
    cout<<sol<<"\n";
}