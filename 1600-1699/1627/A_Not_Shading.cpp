#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,r,c;
        cin>>n>>m>>r>>c;
    vector<vector<int>> G(n,vector<int>(m));
        bool is=false;
        vector<bool> col(m,false);
        vector<bool> row(n,false);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char e;
                cin>>e;
                if(e=='B'){
                    G[i][j]=1;
                    col[j]=true;
                    row[i]=true;
                    is=true;
                }
                else G[i][j]=0;
            }
        }
        if(G[r-1][c-1]){
            cout<<"0\n";
        }
        else if(col[c-1] or row[r-1])cout<<"1\n";
        else if(is)cout<<"2\n";
        else cout<<"-1\n";
    }

}