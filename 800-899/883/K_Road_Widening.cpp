#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v(n),s(n),g(n);
    for(int i=0;i<n;i++){
        cin>>s[i]>>g[i];
        v[i]=s[i]+g[i];
    }
    for(int i=1;i<n;i++){
        v[i]=min(v[i-1]+1,v[i]);
    }
    for(int i=n-2;i>=0;i--){
        v[i]=min(v[i+1]+1,v[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=v[i]-s[i];
        if(v[i]<s[i]){
            cout<<"-1";
            return 0;
        }
    }
    cout<<ans<<"\n";
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
}