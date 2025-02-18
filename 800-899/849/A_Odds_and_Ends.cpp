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
    if(n%2==0 or V[0]%2==0 or V[n-1]%2==0){
        cout<<"No";
        return 0;
    }
    else cout<<"Yes";
}