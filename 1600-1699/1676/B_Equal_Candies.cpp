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
        vector<int> V(n);
        int m=LLONG_MAX;
        for(int i=0;i<n;i++){
            cin>>V[i];
            m=min(m,V[i]);
        }
        int sol=0;
        for(int i=0;i<n;i++){
            sol+=V[i]-m;
        }
        cout<<sol<<"\n";
    }
}