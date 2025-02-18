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
        int pos=0;
        vector<int> V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        sort(V.begin(),V.end());
        for(int i=0;i<n-1;i++){
            pos+=max(V[i],V[i+1])+1;
        }
        pos+=max(V[n-1],V[0])+1;
        if(pos>m)cout<<"NO\n";
        else cout<<"YES\n";
    }
}