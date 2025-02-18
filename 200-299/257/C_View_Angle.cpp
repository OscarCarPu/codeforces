#include <bits/stdc++.h>
using namespace std;
#define int long double
const int err=1e-9;
const int PI=3.14159265359;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i]=atan2(y,x);
        if(a[i]<-err)a[i]+=2*PI;
    }
    sort(a.begin(),a.end());
    int sol=a[n-1]-a[0];
    for(int i=1;i<n;i++){
        sol=min(sol,2*PI-(a[i]-a[i-1]));
    }
    cout<<setprecision(10)<<fixed<<sol/PI*180;
}