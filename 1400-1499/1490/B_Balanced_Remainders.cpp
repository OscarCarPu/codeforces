#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c0=0,c1=0,c2=0;
        int obj=n/3;
        while(n--){
            int x;
            cin>>x;
            if(x%3==0)c0++;
            else if(x%3==1)c1++;
            else c2++;
        }
        int sol=0;
        if(c0>obj){
            sol+=c0-obj;
            c1+=(c0-obj);
            c0=obj;
        }
        if(c1>obj){
            sol+=c1-obj;
            c2+=(c1-obj);
            c1=obj;
        }
        if(c2>obj){
            sol+=c2-obj;
            c0+=(c2-obj);
            c2=obj;
        }
        if(c0>obj){
            sol+=c0-obj;
            c1+=(c0-obj);
            c0=obj;
        }
        if(c1>obj){
            sol+=c1-obj;
            c2+=(c1-obj);
            c1=obj;
        }
        if(c2>obj){
            sol+=c2-obj;
            c0+=(c2-obj);
            c2=obj;
        }
        cout<<sol<<"\n";
    }
}