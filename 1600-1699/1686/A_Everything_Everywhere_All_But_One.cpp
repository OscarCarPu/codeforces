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
        vector<double> V(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>V[i];
            sum+=V[i];
        }
        bool done=false;
        for(int i=0;i<n;i++){
            double x=(sum-V[i])/(n-1);
            if(x==V[i]){
                cout<<"YES\n";
                done=true;
                break;
            }
        }
        if(!done)cout<<"NO\n";
    }
}