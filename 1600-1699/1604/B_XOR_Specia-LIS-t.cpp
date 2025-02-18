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
        int bef;
        cin>>bef;
        bool can=false;
        for(int i=1;i<n;i++){
            int act;
            cin>>act;
            can=can or (act<=bef);
            bef=act;
        }
        if(n%2==0 or can)cout<<"YES\n";
        else cout<<"NO\n";
    }
}