#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    int total=0;
    for(int i =0;i<n;i++)cin>>a[i],total+=a[i];
    vector<int> dp1(n),dp2(n);
    dp2[n-1]=a[n-1];
    dp1[n-1]=0;
    for(int i=n-2;i>=0;i--){
        dp2[i]=max(a[i]+dp1[i+1],dp2[i+1]);
        dp1[i]=min(dp2[i+1],a[i]+dp1[i+1]);
    }
    cout<<total-dp2[0]<<" "<<dp2[0]<<"\n";
}