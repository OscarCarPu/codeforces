#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=LLONG_MAX;
        for(int v=1;v<=a[0];v++){
            int cm=v;
            for(int i=0;i<n;i++){
                int p=min(k,(v?a[i]/v:k));
                cm=max(cm,a[i]/p);
            }
            ans=min(ans,cm-v);
        }
        cout<<ans<<"\n";
    }
}