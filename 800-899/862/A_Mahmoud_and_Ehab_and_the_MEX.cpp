#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    int sol=max(0,x);
    while(n--){
        int y;
        cin>>y;
        if(y==x)sol++;
        if(y<x)sol--;
    }
    cout<<sol;
}