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
            for(int j=0;j<m;j++)cin>>G[i][j];
        }
        int sol=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int aux=G[i][j];
                for(int k=1;i+k<n and j+k<m;k++){
                    aux+=G[i+k][j+k];
                }
                for(int k=1;i-k>=0 and j+k<m;k++){
                    aux+=G[i-k][j+k];
                }
                for(int k=1;i+k<n and j-k>=0;k++){
                    aux+=G[i+k][j-k];
                }
                for(int k=1;i-k>=0 and j-k>=0;k++){
                    aux+=G[i-k][j-k];
                }
                sol=max(sol,aux);
            }
        }
        cout<<sol<<"\n";
    }
}