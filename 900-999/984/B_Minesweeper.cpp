#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<vector<char>> G(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>G[i][j];
    }
    bool good=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(G[i][j]=='*')continue;
            int cnt=0;
            if(i-1>=0)if(G[i-1][j]=='*')cnt++;
            if(j-1>=0)if(G[i][j-1]=='*')cnt++;
            if(i+1<n)if(G[i+1][j]=='*')cnt++;
            if(j+1<m)if(G[i][j+1]=='*')cnt++;
            if(i-1>=0 and j-1>=0 and G[i-1][j-1]=='*')cnt++;
            if(i-1>=0 and j+1<m and G[i-1][j+1]=='*')cnt++;
            if(i+1<n and j-1>=0 and G[i+1][j-1]=='*')cnt++;
            if(i+1<n and j+1<m and G[i+1][j+1]=='*')cnt++;
            if(cnt==0){
                if(G[i][j]!='.')good=false;
            }
            else{
                if(G[i][j]!=char('0'+cnt))good=false;
            }
        }
    }
    if(good)cout<<"YES";
    else cout<<"NO";
}