#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,s,t;
        cin>>n>>s>>t;
        cout<<max(n-s,n-t)+1<<"\n";
    }
}