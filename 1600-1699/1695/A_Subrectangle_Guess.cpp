#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int si=-1,sj=-1;
        int aux=-1*LLONG_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                if(x>aux){
                    aux=x;
                    si=i;
                    sj=j;
                }
            }
        }
        cout<<(n-min(si,n-si-1))*(m-min(sj,m-sj-1))<<"\n";
    }
}