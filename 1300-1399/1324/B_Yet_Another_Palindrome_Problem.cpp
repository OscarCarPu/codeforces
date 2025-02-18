#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool sol=false;
        vector<int> V(n+1,-1);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(V[x]==-1)V[x]=i;
            else{
                if(V[x]!=i-1)sol=true;
            }
        }
        if(sol)cout<<"YES\n";
        else cout<<"NO\n";
    }
}