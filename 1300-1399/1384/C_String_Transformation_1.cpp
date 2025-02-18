#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> G;
vector<bool> B;
int cnt=0;
void dfs(int u){
    B[u]=true;
    for(int v : G[u]){
        if(B[v])continue;
        cnt++;
        dfs(v);
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        bool can=true;
        G=vector<vector<int>> (20);
        for(int i=0;i<n;i++){
            if(b[i]<a[i])can=false;
            G[a[i]-'a'].push_back(b[i]-'a');
            G[b[i]-'a'].push_back(a[i]-'a');
        }
        if(!can){
            cout<<"-1\n";
        }
        else{
            for(int i=0;i<20;i++){
                sort(G[i].begin(),G[i].end());
            }
            cnt=0;
            vector<bool> aux(20,false);
            for(int i=0;i<20;i++){
                if(aux[i])continue;
                B=vector<bool>(20,false);
                dfs(i);
                for(int i=0;i<20;i++){
                    aux[i]=aux[i] or B[i];
                }
            }
            cout<<cnt<<"\n";
        }
    }
}