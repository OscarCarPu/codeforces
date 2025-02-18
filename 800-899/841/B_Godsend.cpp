#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int cnt=0;
    while(n--){
        int x;
        cin>>x;
        if(x%2)cnt++;
    }
    if(cnt)cout<<"First";
    else cout<<"Second";
}