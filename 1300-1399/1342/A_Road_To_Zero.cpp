
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if((a>0 == b>0) and a*2>b){
            cout<<b*min(abs(x),abs(y))+a*(max(abs(x),abs(y))-min(abs(x),abs(y)));
        }
        else{
            cout<<a*(abs(x)+abs(y));
        }
        cout<<"\n";
    }
}