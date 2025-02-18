#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    int sum=n-1;
    while(n--){
        int a;
        cin>>a;
        sum+=a;
    }
    if(sum==x)cout<<"YES";
    else cout<<"NO";
}