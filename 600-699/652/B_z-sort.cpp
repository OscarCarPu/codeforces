#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n),ans(n);
    for(int i=0;i<n;i++)cin>>V[i];
    sort(V.begin(),V.end());
    int p=0,q=n-1;
    for(int i=0;i<n;i++){
        if(i & 1)ans[i]=V[q--];
        else ans[i]=V[p++];
    }
    assert(q+1==p);
    for(int i=0;i<n;i++){cout<<ans[i]<<" ";}
}