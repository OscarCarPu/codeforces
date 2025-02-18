#include <bits/stdc++.h>
using namespace std;
#define int long long
int s=0;
vector<vector<int>> G;
vector<bool> B;
set<int> S;
int siz=0;
void dfs(int u){
    siz++;
    if(S.count(u))s=1;
    B[u]=true;
    for(int v : G[u]){
        if(B[v]==false)dfs(v);
    }
}
const int mod=1e9+7;
int poW(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a%mod,p/2)*(p%2?a:1LL)%mod;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        G=vector<vector<int>>(n);
        B=vector<bool>(n,false);
        vector<int> V(n);
        for(int i=0;i<n;i++)cin>>V[i],V[i]--;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            x--;
            G[V[j]].push_back(x);
            G[x].push_back(V[j]);
        }
        S.clear();
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            x--;
            S.insert(x);
        }
        int sol=0;
        for(int i=0;i<n;i++){
            s=0;
            siz=0;
            if(B[i]==false){
                sol++;
                dfs(i);
                if(s or siz==1)sol--;
            }
        }
        cout<<poW(2,sol)%mod<<"\n";
    }
}