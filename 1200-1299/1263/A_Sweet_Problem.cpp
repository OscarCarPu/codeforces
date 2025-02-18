#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int c[3];
        cin>>c[0]>>c[1]>>c[2];
        sort(c,c+3);
        cout<<min(c[0]+c[1],c[2])+max(0LL,(c[0]+c[1]-c[2])/2)<<"\n";
    }
}