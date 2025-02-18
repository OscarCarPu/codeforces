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
        vector<int> V(n);
        cin>>V[0]>>V[1];
        V[0]%=2;
        V[1]%=2;
        bool pos=true;
        for(int i=2;i<n;i++){
            cin>>V[i];
            V[i]%=2;
            if(i%2==0){
                if(V[i]!=V[0])pos=false;
            }
            else if(V[i]!=V[1])pos=false;
        }
        if(pos)cout<<"YES\n";
        else cout<<"NO\n";
    }
}