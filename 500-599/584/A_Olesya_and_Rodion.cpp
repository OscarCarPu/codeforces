#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    cin>>n>>t;
    if(t==10 and n==1)cout<<"-1";
    else{
        cout<<t;
        n--;
        if(t==10){
            n--;
        }
        while(n--)cout<<"0";
    }
}