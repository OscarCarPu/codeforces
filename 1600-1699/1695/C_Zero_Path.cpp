#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>G(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>G[i][j];
            }
        }
        if((n+m-1)%2){
            cout<<"NO\n";
            continue;
        }
        vector<vector<int>> M(n,vector<int>(m)),mi(n,vector<int>(m));
        M[0][0]=mi[0][0]=G[0][0];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i){
                    M[i][j]=M[i-1][j]+G[i][j];
                    mi[i][j]=mi[i-1][j]+G[i][j];
                }
                if(j){
                    M[i][j]=M[i][j-1]+G[i][j];
                    mi[i][j]=mi[i][j-1]+G[i][j];
                }
                if(i and j){
                    M[i][j]=max(M[i-1][j],M[i][j-1])+G[i][j];
                    mi[i][j]=min(mi[i-1][j],mi[i][j-1])+G[i][j];
                }
            }
        }
        if(M[n-1][m-1]>=0 and mi[n-1][m-1]<=0 and M[n-1][m-1]%2==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}