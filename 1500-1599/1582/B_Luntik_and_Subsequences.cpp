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
        int cont0=0,cont1=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1)cont1++;
            if(x==0)cont0++;
        }
        cout<<cont1*(1LL<<cont0)<<"\n";
    }
}