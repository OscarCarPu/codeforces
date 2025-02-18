#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    sort(V.begin(),V.end());
    vector<int> sum(n+1,0);
    for(int i=0;i<n;i++){
        sum[i+1]+=V[i]+sum[i];
    }
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<sum[n-(x-y)]-sum[n-x]<<"\n";
    }
}