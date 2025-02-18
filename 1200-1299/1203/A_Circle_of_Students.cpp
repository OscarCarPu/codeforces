#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<int> V(n);
        int pos1;
        for(int i=0;i<n;i++){
            cin>>V[i];
            if(V[i]==1){
                pos1=i;
            }
        }
        bool sol1=true,sol2=true;
        for(int i=1;i<n;i++){
            if(V[(pos1-i+n)%n]!=i+1)sol1=false;
            if(V[(pos1+i+n)%n]!=i+1)sol2=false;
        }
        if(sol1 or sol2)cout<<"YES\n";
        else cout<<"NO\n";
    }
}