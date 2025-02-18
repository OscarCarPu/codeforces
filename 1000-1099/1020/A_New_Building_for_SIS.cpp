#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    while(k--){
        int t1,f1,t2,f2;
        cin>>t1>>f1>>t2>>f2;
        if(t1==t2){
            cout<<abs(f1-f2)<<"\n";
        }
        else{
            int sol=0;
            if(f1>b or f1<a){
                sol+=min(abs(f1-b),abs(f1-a));
                if(abs(f1-b)<abs(f1-a)){
                    f1=b;
                }
                else f1=a;
            }
            sol+=abs(t1-t2);
            sol+=abs(f1-f2);
            cout<<sol<<"\n";
        }
    }
}