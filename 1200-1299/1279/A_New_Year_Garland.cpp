#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<int>
#define int ll
signed main(){
    int t;
    cin>>t;
    while(t--){
    int r,g,b;
    cin>>r>>g>>b;
    if(r<g)swap(r,g);
    if(r<b)swap(r,b);
    if(r-1<=g+b)cout<<"Yes\n";
    else cout<<"No\n";
    }
    
}