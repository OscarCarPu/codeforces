#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    int ans=1e9;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=V[j]*(abs(i-j)+j+i)*2;
        }
        ans=min(ans,sum);
    }
    cout<<ans;
}