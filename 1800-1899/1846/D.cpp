#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi vector<int>
#define ld long double

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ld n,d,h;
        cin>>n>>d>>h;
        vector<ld> a(n);
        ld sol=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=1;i<n;i++){
            if(a[i]-h>=a[i-1]){
                sol+=(h*d)/2.0;
            }
            else{
                ld d2=(d*(a[i-1]+h-a[i])/h);
                sol+=(d+d2)/2.0*(a[i]-a[i-1]);
            }
        }
        cout<<setprecision(10)<<fixed<<sol+(h*d)/2.0<<"\n";
    }
}