#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    n%=6;
    while(n--){
        if(n&1){
            if(x!=0)x=3-x;
        }
        else{
            if(x!=2)x=1-x;
        }
    }
    cout<<x;
}