#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> G;
vector<bool> B;
vector<int> sol;
        map<pair<int,int>,int> M;
        map<int,pair<int,int>> M2;
void dfs(int u){
    B[u]=true;
    for(int v : G[u]){
        if(B[v])continue;
        sol[M[{u,v}]]=1;
        dfs(v);
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        G=vector<vector<int>>(n);
        B=vector<bool> (n,false);
        M.clear();
        M2.clear();
        sol=vector<int> (m,0);
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            G[u].push_back(v);
            G[v].push_back(u);
            M[{u,v}]=i;
            M[{v,u}]=i;
            M2[i]={min(u,v),max(u,v)};
        }
        dfs(0);
        if(m<=n+1){
            for(int i : sol)cout<<i;
            cout<<"\n";
        }
        else{
            set<int> S;
            int edge1=-1,edge2=-1;
            for(int i=0;i<m;i++){
                if(sol[i]==0){
                    S.insert(M2[i].first);
                    S.insert(M2[i].second);
                    edge1=M2[i].first;
                    edge2=M2[i].second;
                }
            }
            if(S.size()==3){
                sol=vector<int>(m,0);
                B=vector<bool>(n,false);
                B[edge1]=true;
                dfs(edge2);
                sol[M[{edge1,edge2}]]=1;
                for(int v : G[edge1]){
                    if(B[v])continue;
                    sol[M[{edge1,v}]];
                    dfs(v);
                }
            }
            for(int i : sol)cout<<i;
            cout<<"\n";
        }
    }
}