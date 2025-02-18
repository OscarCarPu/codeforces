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
        int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int sumMin=0,sumMax=0,sumSq=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i])swap(a[i],b[i]);
            sumSq+=a[i]*a[i]+b[i]*b[i];
            sumMin+=a[i];
            sumMax+=b[i];
        }
        bitset<10010> dp;
        dp[0]=1;
        for(int i=0;i<n;i++){
            dp|=dp<<(b[i]-a[i]);
        }
        int ans=sumMin*sumMin+sumMax*sumMax;
        for(int i=0;i<=sumMax-sumMin;i++){
            if(dp[i]){
                ans=min(ans,(sumMin+i)*(sumMin+i)+(sumMax-i)*(sumMax-i));
            }
        }
        cout<<sumSq*(n-2)+ans<<"\n";
    }
}