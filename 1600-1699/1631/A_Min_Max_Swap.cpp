#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int x1=0,x2=0;
        for(int i=0; i<n; i++){cin>>a[i];}
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            x1=max(x1,min(a[i],x));
            x2=max(x2,max(a[i],x));
        }
        cout<<x1*x2<<"\n";
    }
}