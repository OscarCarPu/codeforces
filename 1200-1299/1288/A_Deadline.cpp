#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,d;
int upDiv(int a,int b){
    return (a+b-1)/b;
}
int can(int x){
    return x+upDiv(d,x+1);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>d;
        int low=0,high=n-1;

        bool res=false;
        while(low<=high){
            int mid=(high+low)/2;
            int smid=mid+1;
            int v1=can(mid);
            int v2=can(smid);
            if(v1<=n or v2<=n)res=true;
            
            if(v2>v1){
                high=mid-1;
            }else{
                low=mid+2;
            }
        }
        if(res)cout<<"YES\n";
        else cout<<"NO\n";
    }
}