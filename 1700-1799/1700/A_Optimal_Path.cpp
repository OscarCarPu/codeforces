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
        int sol=m*(m-1)/2;
        sol+=(n*(n+1)/2)*m;
        cout<<sol<<"\n";
    }
}