#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int bef;
    bef=0;
    int sol=0;
    int val=0;
    for(int i=0;i<n;i++){
        int act;
        cin>>act;
        val+=(bef-act);
        bef=act;
        sol+=abs(min(val,0LL));
        val=max(val,0LL);
    }
    cout<<sol;
}