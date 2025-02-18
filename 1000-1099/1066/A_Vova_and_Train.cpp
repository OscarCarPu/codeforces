#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int L,v,l,r;
        cin>>L>>v>>l>>r;
        int aux=L/v;
        l+=(v-(l%v))%v;
        if(r>=l){
            aux-=1+(r-l)/v;
        }
        cout<<aux<<endl;
    }
}