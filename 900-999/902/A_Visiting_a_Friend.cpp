#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int p=0;
    bool pos=true;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a>p)pos=false;
        p=max(p,b);
    }
    if(p<m)pos=false;
    if(pos)cout<<"YES\n";
    else cout<<"NO\n";
}