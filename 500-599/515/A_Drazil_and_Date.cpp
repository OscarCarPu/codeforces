#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,s;
    cin>>x>>y>>s;
    int d=abs(x)+abs(y);
    if(d>s or (d%2!=s%2))cout<<"No\n";
    else cout<<"Yes";
}