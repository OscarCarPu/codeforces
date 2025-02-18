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
        int x=-1;
        bool sol=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char e;
                cin>>e;
                if(e=='R'){
                    if(x==-1){
                        x=j;
                    }
                    else{
                        if(j<x){
                            sol=false;
                        }
                    }
                }
            }
        }
        if(sol)cout<<"YES\n";
        else cout<<"NO\n";
    }
}