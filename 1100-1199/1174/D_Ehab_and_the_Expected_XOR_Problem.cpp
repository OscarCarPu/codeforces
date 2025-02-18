#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int> v;
    for(int i=1;i<(1LL<<n);i++){
        if((i^x)>i)v.push_back((i-1)^i);
    }
    cout<<v.size()<<"\n";
    for(int i : v)cout<<i<<" ";
}