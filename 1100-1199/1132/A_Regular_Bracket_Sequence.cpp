#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((c and (!a or !d)) or a!=d)cout<<0;
    else cout<<1;
}