#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        x-=a;
        y-=b;
        if(x>0){
            c-=x;
            x=0;
        }
        if(y>0){
            c-=y;
            y=0;
        }
        if(c<0)cout<<"NO\n";
        else cout<<"YES\n";
    }
}