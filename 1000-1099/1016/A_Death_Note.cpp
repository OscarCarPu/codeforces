#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int names=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        names+=a;
        cout<<names/m<<" ";
        names%=m;
    }
}