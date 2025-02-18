#include <bits/stdc++.h>
using namespace std;
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
        bool sol=true;
        for(int i=1;i<=n;i++){
            cin>>d[i];
            if(d[i]+k<=l)pie.push_back(i);
            if(d[i]>l)sol=false;
        }
        pie.push_back(n+1);
        for(int i=1;i<pie.size();i++){
            int alt=k;
            bool baj=true;
            for(int j=pie[i-1]+1;j<=pie[i]-1;j++){
                if(baj)alt--;
                else alt++;
  
                if(alt+d[j]>l){
                    if(!baj)sol=false;
                    else{
                        int ned=alt+d[j]-l;
                        if(alt-ned<0){
                            sol=false;
                        }
                        alt-=ned;
                    }
                }
                              if(alt==0)baj=false;
            }
        }
        if(sol)cout<<"Yes\n";
        else cout<<"No\n";
    }
}