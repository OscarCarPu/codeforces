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
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(i+1)*(n-i);
            if(V[i]==0){
                ans+=(i+1)*(n-i);
            }
        }
        cout<<ans<<"\n";
    }
}