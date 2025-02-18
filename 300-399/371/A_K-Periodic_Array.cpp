#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int sol=0;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    for(int i=0;i<k;i++){
        int c1=0,c0=0;
        for(int j=i;j<n;j+=k){
            if(V[j]==1)c1++;
            else c0++;
        }
        sol+=min(c1,c0);
    }
    cout<<sol;
}