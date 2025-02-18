#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(k);
        for(int i=0;i<k;i++)cin>>a[i];
        sort(a.rbegin(),a.rend());
        bool can=false;


        if(n%2){
            if(n==1){
                if(a[0]>=m){
                    can=true;
                }
            }
            int an=n;
            if(a[0]>=m*3){
                int aux=a[0]/m;
                an-=aux;
                for(int i=1;i<k;i++){
                    if(a[i]<m*2)break;
                    aux=a[i]/m;
                    an-=aux;
                }
            }
            if(an<=0)can=true;
        }
        else{
            int an=n;
            for(int i=0;i<k;i++){
                if(a[i]<m*2)break;
                an-=(a[i]/m);
            }
            if(an<=0)can=true;
        }

        if(m%2){
            if(m==1){
                if(a[0]>=n){
                    can=true;
                }
            }
            int am=m;
            if(a[0]>=n*3){
                int aux=a[0]/n;
                am-=aux;
                for(int i=1;i<k;i++){
                    if(a[i]<n*2)break;
                    aux=a[i]/n;
                    am-=aux;
                }
            }
            if(am<=0)can=true;
        }
        else{
            int am=m;
            for(int i=0;i<k;i++){
                if(a[i]<n*2)break;
                am-=(a[i]/n);
            }
            if(am<=0)can=true;
        }
        if(can)cout<<"Yes\n";
        else cout<<"No\n";
    }
}