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
        if(n%2==0){
            cout<<n/2<<" 0 0\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}