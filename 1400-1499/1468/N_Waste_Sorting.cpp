#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x;
        cin>>x;
        a-=x;
        cin>>x;
        b-=x;
        cin>>x;
        c-=x;
        cin>>x;
            if(a>x)a=0;
            else{
                x-=a;
                c-=x;
            }
        cin>>x;
        if(b>x)b=0;
        else x-=b,c-=x;
        if(a<0 or b<0 or c<0)cout<<"NO\n";
        else cout<<"YES\n";
    }
}