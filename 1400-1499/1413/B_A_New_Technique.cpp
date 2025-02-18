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
        vector<vector<int>> G(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>G[i][j];
            }
        }
        vector<int> V(n);
        for(int k=0;k<n;k++){
            int x;
            cin>>x;
            for(int i=k;i<n;i++){
                for(int j=0;j<m;j++){
                    if(G[i][j]==x){
                        swap(G[i],G[k]);
                        i=n;
                        j=m;
                    }
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                int x;
                cin>>x;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<G[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}