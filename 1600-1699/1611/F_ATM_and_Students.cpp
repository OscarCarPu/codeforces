#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> V(n+1);
        for(int i=1;i<=n;i++)cin>>V[i];
        int ansL=1,ansR=0;
        for(int i=1,j=0;i<=n;i++){
            while(s>=0 and j<n){
                s+=V[++j];
                if(s>=0 and j-i>ansR-ansL){
                    ansL=i,ansR=j;
                }
            }
            s-=V[i];
        }
        if(ansL>ansR)cout<<"-1\n";
        else cout<<ansL<<" "<<ansR<<"\n";
    }
}