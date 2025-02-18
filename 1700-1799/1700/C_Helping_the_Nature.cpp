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
    vector<int> sum(n);
    int ans=0;
    int p=V[0];
    for(int i=0;i<n-1;i++){
        if(V[i]<V[i+1]){
            ans+=V[i+1]-V[i];
        }
        else{
            ans+=V[i]-V[i+1];
            p-=V[i]-V[i+1];
        }
    }
    ans+=abs(p);
    cout<<ans<<"\n";
}
}