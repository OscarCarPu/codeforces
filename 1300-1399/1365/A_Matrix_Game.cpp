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
        vector<vector<int>>G(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)cin>>G[i][j];
        }
        int moves=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int cont=G[i][j];
                for(int k=1;i+k<n or j+k<m or i-k>=0 or j>=k;k++){
                    if(i+k<n)cont+=G[i+k][j];
                    if(j+k<m)cont+=G[i][j+k];
                    if(i>=k)cont+=G[i-k][j];
                    if(j>=k)cont+=G[i][j-k];
                }
                if(cont==0){
                    moves++;
                    G[i][j]=1;
                }
            }
        }
        if(moves%2==0)cout<<"Vivek\n";
        else cout<<"Ashish\n";
    }
}