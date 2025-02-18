#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==1 and m==1)cout<<"0\n";
        else if(n==1 or m==1)cout<<"1\n";
        else cout<<"2\n";
    }
}