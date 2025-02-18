#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> G;
vector<int> B;
vector<int> sol;
map<pair<int,int>,int> M;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        G=vector<vector<int>>(n);
        B=vector<int> (n,0);
        M.clear();
        sol=vector<int>(m,0);
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            G[u].push_back(v);
            G[v].push_back(u);
            M[{u,v}]=i;
            M[{v,u}]=i;
        }
        queue<int> Q;
        Q.push(0);
        while(!Q.empty()){
            int u=Q.front();
            Q.pop();
            if(B[u]==2)continue;
            B[u]=1;
            for(int v : G[u]){
                if(B[v]==0){
                    B[v]=1;
                    sol[M[{u,v}]]=1;
                    Q.push(v);
                }
            }
            B[u]=2;
        }
        for(int i : sol)cout<<i;
        cout<<"\n";
    }
}