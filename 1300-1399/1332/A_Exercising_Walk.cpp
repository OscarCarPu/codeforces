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
        int x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        if(x1<=x-a+b and x-a+b<=x2 and (x1<x2 or a+b==0) and y1<=y-c+d and y-c+d<=y2 and (y1<y2 or c+d==0))cout<<"Yes\n";
        else cout<<"No\n";
    }
}