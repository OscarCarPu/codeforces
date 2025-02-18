#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        int a[n+1];
        bool can=true;
        for(int i=1;i<=n;i++){
            a[i]=((l-1)/i+1)*i;
            can=can and a[i]<=r;
        }
        if(can){
            cout<<"YES\n";
            for(int i=1;i<=n;i++)cout<<a[i]<<" ";
            cout<<"\n";
        }
        else cout<<"NO\n";
    }
}