#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%9!=0 or min(a,min(b,c))<(a+b+c)/9)cout<<"NO\n";
        else cout<<"YES\n";
    }
}