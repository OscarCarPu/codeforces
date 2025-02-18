#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int v;
    cin>>v;
    queue<int> Q;
    map<int,int> dist;
    dist[v]=0;
    Q.push(v);
    while(!Q.empty()){
        int k=Q.front();
        Q.pop();
        string s=to_string(k);
        if(s.size()==n){
            cout<<dist[k]<<endl;
            return 0;
        }
        for(auto x : s){
            if(x=='0')continue;
            int w=k*(x-'0');
            if(!dist.count(w)){
                dist[w]=dist[k]+1;
                Q.push(w);
            }
        }
    }
    cout<<"-1";
}