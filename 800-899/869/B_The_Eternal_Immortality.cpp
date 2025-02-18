#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int sol=1;
    for(int i=a+1;i<=b;i++){
        sol*=i;
        sol%=10;
        if(sol==0)break;
    }
    cout<<sol;
}