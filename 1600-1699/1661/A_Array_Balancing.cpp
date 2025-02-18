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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<a[i])swap(a[i],b[i]);
        }
        int sol=0;
        for(int i=1;i<n;i++){
            sol+=abs(a[i]-a[i-1]);
            sol+=abs(b[i]-b[i-1]);
        }
        cout<<sol<<"\n";
    }
}