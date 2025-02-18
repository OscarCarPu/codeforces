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
        vector<int> V1(n),V2(n);
        int neg=-1,pos=-1;
        for(int i=0;i<n;i++){
            cin>>V1[i];
            if(V1[i]<0 and neg==-1)neg=i;
            if(V1[i]>0 and pos==-1)pos=i;
        }
        if(pos==-1)pos=LLONG_MAX;
        if(neg==-1)neg=LLONG_MAX;
        for(int i=0;i<n;i++)cin>>V2[i];
        bool sol=true;
        for(int i=n-1;i>=0;i--){
            if(V2[i]<V1[i]){
                if(neg>=i){
                    sol=false;
                }
            }
            if(V2[i]>V1[i]){
                if(pos>=i){
                    sol=false;
                }
            }
        }
        if(sol)cout<<"YES\n";
        else cout<<"NO\n";
    }
}