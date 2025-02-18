#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,s,sum=0,sol=LLONG_MAX;
        cin>>n>>s;
        vi V(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>V[i];
            sum+=V[i];
            V[i]+=V[i-1];
        }
        if(sum<s){
            cout<<"-1\n";
            continue;
        }
        for(int i=1;i<=n;i++){
            int low=i,high=n;
            while(low<=high){
                int mid=(low+high)>>1;
                if(V[mid]-V[i-1]==s){
                    sol=min(sol,i-1+n-mid);
                    low=mid+1;
                }
                else if(V[mid]-V[i-1]>s){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        }
        if(sol==LLONG_MAX)sol=0;
        cout<<sol<<"\n";
    }
}