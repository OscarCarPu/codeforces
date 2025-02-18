#include <bits/stdc++.h>
using namespace std;
#define int long long
struct edge{
    int d,a,b;
};
vector<vector<edge>> G;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        G=vector<vector<edge>>(n);
        for(int i=1;i<n;i++){
            edge aux;
            int x;
            cin>>x>>aux.a>>aux.b;
            x--;
            aux.d=i;
            G[x].push_back(aux);
        }
        
    }
}

