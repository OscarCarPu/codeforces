#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    n*=2;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    sort(V.begin(),V.end());
    if(V[n/2]>V[n/2-1])cout<<"YES";
    else cout<<"NO";
}