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
int aux=1;
vector<si> sol;
vvi G;
vb B;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        G=vvi (n);
        sol=vector<si>(n);
        aux=1;
        vi in(n,0);
        B=vb(n,false);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                char e;
                cin>>e;
                if(e=='1')G[i].push_back(j),in[j]++;
            }
        }
        queue<int> Q;
        for(int i=0;i<n;i++){
            if(in[i]==0){
                Q.push(i);
            }
        }
        while(Q.size()){
            int u=Q.front();
            Q.pop();
            if(B[u])continue;
            B[u]=true;
            sol[u].insert(aux++);
            for(int v : G[u]){
                Q.push(v);
                for(int x : sol[u]){
                    sol[v].insert(x);
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<sol[i].size()<<" ";
            for(int x : sol[i])cout<<x<<" ";
            cout<<"\n";
        }
    }
}