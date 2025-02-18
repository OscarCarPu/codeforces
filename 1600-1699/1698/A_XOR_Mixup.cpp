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
        for(int i=0;i<n;i++)cin>>V[i];
        int xr=0;
        for(int i : V)xr=(xr^i);
        for(int i : V){
            if((xr^i)==i){
                cout<<i<<"\n";
                break;
            }
        }
    }
}