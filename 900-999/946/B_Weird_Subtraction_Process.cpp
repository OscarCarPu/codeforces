#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    while(true){
        if(a==0 or b==0)break;
        if(a>=2*b){
            a-=(2*b)*(a/(2*b));
            continue;
        }
        if(b>=2*a){
            b-=(2*a)*(b/(2*a));
            continue;
        }
        break;
    }
    cout<<a<<" "<<b;
}