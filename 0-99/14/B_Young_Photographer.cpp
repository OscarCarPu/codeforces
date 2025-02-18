#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    int l=-1,r=1001;
    while(n--){
        int xl,xr;
        cin>>xl>>xr;
        if(xl>xr)swap(xl,xr);
        l=max(l,xl);
        r=min(r,xr);
    }
    if(r>=l){
        if(x>=l and x<=r){
            cout<<0;
        }
        else{
            cout<<min(abs(l-x),abs(x-r));
        }
    }
    else cout<<-1;
}