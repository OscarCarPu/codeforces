#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    bool side=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            if(x==1){
                if(i==n-1 or i==0 or j==0 or j==m-1)side=true;
            }
        }
    }
    if(side)cout<<2;
    else cout<<4;
}