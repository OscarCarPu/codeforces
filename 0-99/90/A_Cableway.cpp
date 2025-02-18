#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int r,g,b,sol=0;
    cin>>r>>g>>b;
    if(r>0){
        sol=max(sol,(r-1)/2*3+30);
    }
    if(g>0){
        sol=max(sol,(g-1)/2*3+31);
    }
    if(b>0){
        sol=max(sol,(b-1)/2*3+32);
    }
    cout<<sol;
}