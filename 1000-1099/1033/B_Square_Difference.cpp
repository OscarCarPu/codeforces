#include <bits/stdc++.h>
using namespace std;
#define int long long
bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a-b==1 and prime(a+b))cout<<"YES\n";
        else cout<<"NO\n";
    }
}