#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n==1 or n==2){
        cout<<"No";
    }
    else{
        cout<<"Yes\n";
        if(n%2)cout<<n/2+1<<" ";
        else cout<<n/2<<" ";
        for(int i=1;i<=n;i+=2)cout<<i<<" ";
        cout<<endl;
        cout<<n/2<<" ";
        for(int i=2;i<=n;i+=2)cout<<i<<" ";
    }
}