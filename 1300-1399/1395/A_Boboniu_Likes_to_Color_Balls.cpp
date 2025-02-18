#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        int i=0,p=0;
        if(r%2==0)p++;else i++;
        if(g%2==0)p++;else i++;
        if(b%2==0)p++;else i++;
        if(w%2==0)p++;else i++;
        if(i<2 or (p<2 and r>0 and g>0 and b>0))cout<<"Yes\n";
        else cout<<"No\n";
    }
}