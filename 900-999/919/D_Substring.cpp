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
vector<si> G;
vector<vi> M;
vb B;
vi b;
string s;
void dfs(int u){
    if(B[u])return;
    B[u]=true;
    for(int v : G[u]){
        if(!B[v])dfs(v);
        for(char e='a';e<='z';e++){
            M[u][e-'a']=max(M[u][e-'a'],M[v][e-'a']+(s[u]==e));
        }
    }
}
bool is_acycle(int u){
    b[u]=1;
    for(int v : G[u]){
        if(b[v]==1){
            //cerr<<u<<" "<<v<<endl;
            return false;
        }
        if(b[v]==2)continue;
        if(is_acycle(v)==false)return false;;
    }
    b[u]=2;
    return true;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    cin>>s;
    M=vvi(n,vi(30,0));;
    for(int i=0;i<n;i++){
        M[i][s[i]-'a']++;
    }
    G=vector<si>(n);
    B=vb(n,false);
    b=vi(n,0);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        G[u].insert(v);
    }
    //cerr<<"l";
    bool aux=true;
    for(int i=0;i<n;i++){
        if(b[i]==0){
            aux=aux and is_acycle(i);
            if(!aux)break;
        }
    }
    //cerr<<1<<" "<<aux<<endl;
    if(!aux){
        cout<<"-1";
        return 0;
    }
    for(int i=0;i<n;i++){
        if(!B[i])dfs(i);
    }
    int sol=0;
    for(int i=0;i<n;i++){
        for(char e='a';e<='z';e++){
            sol=max(sol,M[i][e-'a']);
        }
    }
    cout<<sol;
}