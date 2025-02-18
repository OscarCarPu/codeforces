#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int x=0;
    int y=0;
    for(int i=0;i<n;i++){
        char e;
        cin>>e;
        if(e=='R')x++;
        if(e=='L')x--;
        if(e=='U')y++;
        if(e=='D')y--;
    }
    cout<<n-(abs(y)+abs(x));
}