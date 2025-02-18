#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,s;
        cin>>n>>s;
        cout<<s/(n*n)<<"\n";
    }
}