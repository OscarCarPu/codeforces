#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int ned=max(n-1,1LL);
    int sol=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sol+=x;
    }
    if(sol==ned)cout<<"YES";
    else cout<<"NO";
}