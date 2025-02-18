#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        if(V[0]!=n and V[n-1]!=n){
            cout<<"-1\n";
        }
        else{
            reverse(V.begin(),V.end());
            for(int i : V)cout<<i<<" ";
            cout<<"\n";
        }
    }
}