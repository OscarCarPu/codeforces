#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<"=";
        return 0;
    }
    double a=y*log(x);
    double b=x*log(y);
    if(abs(a-b)<1e-8){
        cout<<"=";
    }
    else if(a<b)cout<<"<";
    else cout<<">";
}