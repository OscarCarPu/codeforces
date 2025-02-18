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
        int n,x;
        cin>>n>>x;
        vi V(n);
        bool cant=true;
        for(int i=0;i<n;i++)cin>>V[i],cant=cant&&(V[i]%x==0);
        if(cant){
            cout<<"-1\n";
            continue;
        }
        vi pre(n);
        int sum=0;
        int sol=0;
        for(int i=0;i<n;i++){
            sum+=V[i];
            if(sum%x!=0){
                sol=max(sol,i+1);
            }
        }
        if(sum%x!=0){
            sol=max(sol,n);
        }
        for(int i=0;i<n;i++){
            sum-=V[i];
            if(sum%x!=0){
                sol=max(sol,n-i-1);
            }
        }
        cout<<sol<<"\n";
    }
}