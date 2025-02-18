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
        vector<vector<char>> G(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>G[i][j];
            }
        }
        int cont=0;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(G[i][j]=='*'){
                    cont++;
                    G[i][j]='.';
                }
                else if(G[i][j]=='o'){
                    for(int x=i-1;cont>0;x--,cont--){
                        G[x][j]='*';
                    }
                }
            }
            for(int x=n-1;cont>0;x--,cont--){
                G[x][j]='*';
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<G[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
}