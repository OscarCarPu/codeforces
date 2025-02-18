#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,d;
    cin>>n>>d;
    int m;
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        bool in=true;
        if(!((x-y)<=d and (x-y)>=-d))in=false;
        if(!((x+y)<=n+n-d and (x+y)>=d))in=false;
        if(in)cout<<"YES\n";
        else cout<<"NO\n";
    }
}