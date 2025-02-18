#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        int aa=a,bb=b,nn=n;
        if(a-x<=n){
            n-=(a-x);
            a=x;
        }
        else{
            a-=n;
            n=0;
        }
        b-=n;
        b=max(b,y);
        int sol=a*b;
        n=nn;
        a=bb;
        b=aa;
        swap(x,y);
        if(a-x<=n){
            n-=(a-x);
            a=x;
        }
        else{
            a-=n;
            n=0;
        }
        b-=n;
        b=max(b,y);
        sol=min(sol,a*b);
        cout<<sol<<"\n";
    }
}