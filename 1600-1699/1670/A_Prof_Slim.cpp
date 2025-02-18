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
        int cont=0;
        for(int i=0;i<n;i++){
            cin>>V[i];
            if(V[i]<0)cont++;
            V[i]=abs(V[i]);
        }
        bool sol=true;
        for(int i=1;i<cont;i++){
            if(V[i]>V[i-1])sol=false;
        }
        for(int i=cont+1;i<n;i++){
            if(V[i]<V[i-1])sol=false;
        }
        if(sol)cout<<"YES\n";
        else cout<<"NO\n";
    }
}