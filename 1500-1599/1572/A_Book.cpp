#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> G;
set<int> S;
bool can=true;
void dfs(int u,int i){
    if(i==u and S.count(u)){
        can=false;
    }
    if(S.count(u))return;
    S.insert(u);
    for(int v : G[u]){
        dfs(v,i);
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
        G=vector<vector<int>>(n);
        S.clear();
        can=true;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            while(k--){
                int x;
                cin>>x;
                x--;
                G[x].push_back(i);
            }
        }
        int sol=0;
        for(int i=0;i<n;i++){
            if(!S.count(i)){
                sol++;
                dfs(i,i);
            }
        }
        if(can==false)sol=-1;
        cout<<sol<<"\n";
    }
}