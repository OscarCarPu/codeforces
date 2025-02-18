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
        int x=0;
        int b;
        cin>>b;
        for(int i=1;i<n;i++){
            int a;
            cin>>a;
            x+=(a-b);
            b=a;
        }
        if(x<=1+n)cout<<"YES\n";
        else cout<<"NO\n";
    }
}