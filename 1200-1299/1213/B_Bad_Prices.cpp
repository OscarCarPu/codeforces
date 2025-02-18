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
        int sol=V[n-1];
        int ans=0;
        for(int i=n-2;i>=0;i--){
            if(sol<V[i]){
                ans++;
            }
            sol=min(sol,V[i]);
        }
        cout<<ans<<"\n";
    }
}