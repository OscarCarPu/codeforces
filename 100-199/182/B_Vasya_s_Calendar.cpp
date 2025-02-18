#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int d,n;
    cin>>d>>n;
    int sol=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i==n-1)continue;
        sol+=(d-x);
    }
    cout<<sol;
}