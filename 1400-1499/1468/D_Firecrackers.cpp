#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        vector<int> S(m);
        for(int i=0;i<m;i++)cin>>S[i];
        sort(S.begin(),S.end());
        int t,f;
        if(a<b){
            t=b-1;
            f=b-a-1;
        }
        else{
            t=n-b;
            f=a-b-1;
        }
        int high=min(m,f),low=0;
        int res=low;
        while(high>=low){
            int mid=(high+low)/2;
            bool can=true;
            for(int i=mid-1;i>=0;i--){
                if(S[i]>=(t+1-(mid-i)))can=false;
            }
            if(can){
                res=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        cout<<res<<"\n";
    }
}