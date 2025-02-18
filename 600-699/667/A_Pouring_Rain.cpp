#include <bits/stdc++.h>
using namespace std;
#define int long double
const int PI=3.14159265359;
signed main(){
    int d,h,v,e;
    cout<<setprecision(10)<<fixed;
    cin>>d>>h>>v>>e;
    int s=PI*(d*d)/4;
    int u=e*s;
    if(u>=v){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        cout<<(h*s/(v-u));
    }
}