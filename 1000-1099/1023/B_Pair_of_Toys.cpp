#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int right=min(n,k-1);
    int left=k-right;
    int ans=0;
    if(left<right){
        ans=(right-left+1)/2;
    }
    cout<<ans;
}