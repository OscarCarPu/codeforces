#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        vector<int> d(n+1),pie;
        pie.push_back(0);
        for(int i=1;i<=n;i++){
            cin>>d[i];
            if(d[i]+k<=l)pie.push_back(i);
        }
        pie.push_back(n+1);
        bool sol=true;
        for(int i=1;i<pie.size();i++){
            int alt=k;
            bool baj=true;
            for(int j=pie[i-1]+1;j<=pie[i]-1;j++){
                if(baj)alt--;
                else alt++;
                if(alt==0)baj=false;
                if(alt+d[j]>l and baj)j--;
                if(alt+d[j]>l and !baj)sol=false;
            }
        }
        if(sol)cout<<"Yes\n";
        else cout<<"No\n";
    }
}