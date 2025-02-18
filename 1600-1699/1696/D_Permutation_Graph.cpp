#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
vvi G;
vi d;
const int N=3e5;
int n;
int a[N],Mst[N*2],mst[N*2];
void build(int v=1,int l=0,int r=n-1){
    if(l==r){
        Mst[v]=mst[v]=a[l];
        return;
    }
    int m=(l+r)>>1;
    build(v*2,l,m);
    build(v*2+1,m+1,r);
    Mst[v]=max(Mst[v*2],Mst[v*2+1]);
    mst[v]=min(mst[v*2],mst[v*2+1]);
}
int mquery(int sl,int sr,int v=1,int l=0,int r=n-1){
    if(sr<sl)return LLONG_MAX;
    if(l==sl and r==sr){
        return mst[v];
    }
    int m=(l+r)>>1;
    return min(mquery(sl,min(sr,m),v*2,l,m),mquery(max(sl,m+1),sr,v*2+1,m+1,r));
}
int Mquery(int sl,int sr,int v=1,int l=0,int r=n-1){
    if(sr<sl)return 0;
    if(l==sl and r==sr){
        return Mst[v];
    }
    int m=(l+r)>>1;
    return max(Mquery(sl,min(sr,m),v*2,l,m),Mquery(max(sl,m+1),sr,v*2+1,m+1,r));
}
void dfs(){
    queue<pair<int,int>> Q;
    Q.push({0,0});
    while(Q.size()){
        int u=Q.front().first;
        int w=Q.front().second;
        Q.pop();
        if(d[u]<w and d[u]!=-1)continue;
        d[u]=w;
        for(int v : G[u]){
            Q.push({v,w+1});
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        G.clear();
        d.clear();
        G=vvi(n);
        d=vi(n,-1);
        for(int i=0;i<n;i++)cin>>a[i];
        build();
        for(int i=0;i<n-1;i++){
            G[i].push_back(i+1);
        }
        for(int i=0;i<n-1;){
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    i=j;
                    break;
                }
                if(mquery(i,j)==a[j]){
                    
                    G[i].push_back(j);
                }
                if(j==n-1)i=j;
            }
        }

        for(int i=0;i<n-1;){
            for(int j=i+1;j<n;j++){
                if(a[j]<a[i]){
                    i=j;
                    break;
                }
                if(Mquery(i,j)==a[j]){
                    
                    G[i].push_back(j);
                }
                if(j==n-1)i=j;
            }
        }

        for(int i=n-1;i>0;){
            for(int j=i-1;j>=0;j--){
                if(a[j]>a[i]){
                    i=j;
                    break;
                }
                if(mquery(j,i)==a[j]){
                    G[j].push_back(i);
                }
                if(j==0)i=0;
            }
        }
        for(int i=n-1;i>0;){
            for(int j=i-1;j>=0;j--){
                if(a[j]<a[i]){
                    i=j;
                    break;
                }
                if(Mquery(j,i)==a[j]){
                    G[j].push_back(i);
                }
                if(j==0)i=0;
            }
        }

        dfs();

        cout<<d[n-1]<<"\n";
    }
}