#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int n,m;
        cin>>n>>m;
        vector<vector<int>>G(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>G[i][j];
            }
        }
        bool can=true;
        for(int k=n+m-1;k>=0;k--){
            for(int i=0;i<=k;i++){
                
                int j=k-i;
                if(i>=n or j>=m)continue;
                if(G[i][j]==0){
                    G[i][j]=min(G[i+1][j],G[i][j+1])-1LL;
                }
                else{
                    if(i<n-1 and G[i+1][j]<=G[i][j])can=false;
                    if(j<m-1 and G[i][j+1]<=G[i][j])can=false;
                }
            }
        }
        
        if(!can){
            cout<<"-1\n";
            return 0;
        }
        int sol=0;
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)sol+=G[i][j];
        cout<<sol;
}