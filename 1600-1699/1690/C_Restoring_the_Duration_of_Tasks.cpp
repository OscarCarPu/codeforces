#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi s(n),f(n);
        for(int i=0;i<n;i++)cin>>s[i];
        for(int i=0;i<n;i++)cin>>f[i];
        for(int i=1;i<n;i++){
            s[i]=max(s[i],f[i-1]);
        }
        for(int i=0;i<n;i++){
            cout<<f[i]-s[i]<<" ";
        }
        cout<<"\n";
    }
}