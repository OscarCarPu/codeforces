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
vector<vector<int>> G;
vector<int> B;
bool can=true;
vector<int> sol;
void dfs(int u){
    B[u]=1;
    for(int v : G[u]){
        if(B[v]==1){
            can=false;
        }
        if(B[v]==0){
            dfs(v);
        }
    }
    B[u]=2;
    sol.push_back(u);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>m;
    n=26;
    G=vector<vector<int>>(n);
    B=vector<int>(n,0);
    string bef;
    cin>>bef;
    for(int i=1;i<m;i++){
        string act;
        cin>>act;
        for(int j=0;j<min(act.length(),bef.length());j++){
            if(act[j]!=bef[j]){
                G[bef[j]-'a'].push_back(act[j]-'a');
                break;
            }
            if(j==min(act.length(),bef.length())-1 and act.length()<bef.length())can=false;
        }
        bef=act;
    }
    for(int i=0;i<n;i++){
        if(B[i]==0)dfs(i);
    }
    if(can){
        reverse(sol.begin(),sol.end());
        for(int i : sol)cout<<char(i+'a');
    }
    else cout<<"Impossible\n";
}