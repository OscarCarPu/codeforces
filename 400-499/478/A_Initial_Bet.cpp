#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
    for(int i=0;i<4;i++){
        int u;
        cin>>u;
        x+=u;
    }
    if(x%5==0 and x!=0)cout<<x/5;
    else cout<<"-1";
}