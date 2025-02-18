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
    int j=1<<27;
    int sum=0;
    for(int i=0;i<n-1;i++){
        while(i+j>=n)j/=2;
        V[i+j]+=V[i];
        sum+=V[i];
        cout<<sum<<"\n";
    }
}