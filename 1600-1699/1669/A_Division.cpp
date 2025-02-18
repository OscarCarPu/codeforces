#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<"Division ";
        if(n<=1399)cout<<4;
        else if(n<=1599)cout<<3;
        else if(n<=1899)cout<<2;
        else cout<<1;
        cout<<"\n";
    }
}