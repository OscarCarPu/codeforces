#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sol=0;
    for(int i=1;i<=n;i++){
        sol+=(1LL<<i);
    }
    cout<<sol;
}