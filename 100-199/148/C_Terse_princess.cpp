#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int max=50000;
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> sol;
    if(b==0 and n>1)sol.push_back(1),sol.push_back(1);
    else sol.push_back(1);
    bool pos=true;
    if(a==n-1 and a>0)pos=false;
    int x=1;
    for(int i=0;i<b;i++){
        x*=2;
        sol.push_back(x);
    }
    for(int i=0;i<a;i++){
        x++;
        sol.push_back(x);
    }
    while(sol.size()<n)sol.push_back(1);
    if(x>max)pos=false;
    if(pos)for(int i : sol)cout<<i<<" ";
    else cout<<"-1";
}