#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>m)swap(n,m);
        cout<<(n-1)*2+(m-1)+(m>1)<<"\n";
    }
}