#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==0)cout<<"1\n";
        else cout<<a+b*2+1<<"\n";
    }
}