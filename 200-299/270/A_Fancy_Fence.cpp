
#include <bits/stdc++.h>
using namespace std;
#define int long double
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        x=-360/(x-180);
        x=abs(x);
        if(ceil(x)==x)cout<<"YES\n";
        else cout<<"NO\n";
    }
}