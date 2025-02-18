#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.rbegin(),a.rend());
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<sum-a[x-1]<<"\n";
    }
}