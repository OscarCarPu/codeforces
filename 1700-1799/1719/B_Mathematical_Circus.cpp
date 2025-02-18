#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k%4==0)cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=1;i<=n;i+=2){
                if(i%4==3 or k%2==1)cout<<i<<" "<<i+1<<"\n";
                else cout<<i+1<<" "<<i<<"\n";
            }
        }
    }
}