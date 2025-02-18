#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            if(x<=2048){
                sum+=x;
            }
        }
        if(sum>=2048)cout<<"YES\n";
        else cout<<"NO\n";
    }
}