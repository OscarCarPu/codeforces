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
    int t;
    cin>>t;
    while(t--){
        vvi G(8,vi(8,0));
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                char e;
                cin>>e;
                G[i][j]=e=='#';
            }
        }
        for(int i=1;i<7;i++){
            for(int j=1;j<7;j++){
                if(G[i][j] and G[i-1][j-1] and G[i-1][j+1] and G[i+1][j-1] and G[i+1][j+1]){
                    cout<<i+1<<" "<<j+1<<"\n";
                }
            }
        }
    }
}