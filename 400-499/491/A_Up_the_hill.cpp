#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,n;
    cin>>a>>b;
    n=a+b+1;
    vector<int> sol;
    for(int i=0;i<b;i++){
        sol.push_back(i+1);
    }
    sol.push_back(n);
    for(int i=0;i<a;i++){
        sol.push_back(n-1-i);
    }
    reverse(sol.begin(),sol.end());
    for(int i : sol)cout<<i<<" ";
}