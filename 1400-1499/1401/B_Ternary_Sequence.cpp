#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int z1,o1,t1,z2,o2,t2;
        cin>>z1>>o1>>t1>>z2>>o2>>t2;
        int m=min(z1,t2);
        z1-=m;
        t2-=m;
        m=min(o1,z2);
        o1-=m;
        z2-=m;
        m=min(t1,o2);
        t1-=m;
        o2-=m;
        int sol=2*m;
        sol-=2*min(o1,t2);
        cout<<sol<<"\n";
    }
}
/*
012
201
*/