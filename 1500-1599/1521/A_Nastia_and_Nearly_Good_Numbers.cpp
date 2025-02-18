#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b==1)cout<<"NO\n";
        else cout<<"YES\n"<<a<<" "<<a*(b)<<" "<<a*(b+1)<<"\n";
    }
}