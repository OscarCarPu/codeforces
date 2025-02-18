#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+b+c+d==0)cout<<"0\n";
        else if(a+b+c+d==4)cout<<"2\n";
        else cout<<"1\n";
    }
 }