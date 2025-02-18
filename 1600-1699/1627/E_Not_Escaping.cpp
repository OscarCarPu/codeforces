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
struct com{
    bool operator()(pii& a,pii& b){
        return a.second>b.second;
    }
};
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vi x(n);
        for(int i=0;i<n;i++)cin>>x[i];
        vvpii G(n*m);
        for(int i=0;i<k;i++){
            int x1,y1,x2,y2,h;
            cin>>x1>>y1>>x2>>y2>>h;
            x1--;
            y1--;
            x2--;
            y2--;
            G[x1*m+y1].push_back({x2*m+y2,h});
        }
        priority_queue<pii,vpii,com> Q;
        Q.push({0,0});
        vi dist(n*m,LN);
        dist[0]=0;
        while(Q.size()){
            int u=Q.top().first;
            int w=Q.top().second;
            Q.pop();
            if(dist[u]!=w)continue;
            //cout<<u<<" "<<w<<endl;
            for(int i=0;i<m;i++){
                if(dist[(u/m)*m+i]>w+abs(i-u%m)*x[u/m]){
                    dist[(u/m)*m+i]=w+abs(i-u%m)*x[u/m];
                    Q.push({(u/m)*m+i,w+abs(i-u%m)*x[u/m]});
                }
            }
            for(auto x : G[u]){
                int v=x.first;
                int wv=x.second;
                if(dist[v]>w-wv){
                    dist[v]=w-wv;
                    Q.push({v,w-wv});
                }
            }
        }
        if(dist[n*m-1]==LN){
            cout<<"NO ESCAPE";
        }
        else{
            cout<<dist[n*m-1];
        }
        cout<<"\n";
    }
}

