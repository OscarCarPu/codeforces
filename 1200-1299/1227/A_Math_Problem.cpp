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
        vector<int> l(n),r(n);
        for(int i=0;i<n;i++){
            cin>>l[i]>>r[i];
        }
        sort(l.begin(),l.end());
        sort(r.begin(),r.end());
        cout<<max(0LL,l[n-1]-r[0])<<"\n";
    }
}