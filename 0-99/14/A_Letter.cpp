#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int x1=n-1,x2=0,y1=m-1,y2=0;
    vvi G(n,vi(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char e;
            cin>>e;
            if(e=='.'){
                G[i][j]=0;
            }
            else{
                G[i][j]=1;
                x1=min(x1,i);
                x2=max(x2,i);
                y1=min(y1,j);
                y2=max(y2,j);
            }
        }
    }
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            if(G[i][j])cout<<"*";
            else cout<<".";
        }
        cout<<"\n";
    }
}