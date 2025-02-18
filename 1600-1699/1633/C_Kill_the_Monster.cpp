#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int h,d,H,D,k,w,a;
        bool can=false;
        cin>>h>>d>>H>>D>>k>>w>>a;
        for(int i=0;i<=k;i++){
            int th=((h+i*a)+D-1)/D;
            int tm=(H+(d+(k-i)*w)-1)/(d+(k-i)*w);
            if(th>=tm)can=true;
        }
        if(can)cout<<"YES\n";
        else cout<<"NO\n";
    }
}