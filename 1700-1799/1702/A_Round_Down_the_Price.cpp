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
        int x=1;
        for(int i=1;i<=11;i++){
            if(n<x){
                x/=10;
                break;
            }
            x*=10;
        }
        cout<<n-x<<"\n";
    }
}