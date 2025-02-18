#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    vector<int> sol;
    while(b>=a){
        sol.push_back(b);
        if(b==a)break;
        if(b%10==1)b/=10;
        else if(b%2==0)b/=2;
        else break;
    }
    if(a==b){
        cout<<"YES\n"<<sol.size()<<"\n";
        reverse(sol.begin(),sol.end());
        for(int i : sol)cout<<i<<" ";
    }
    else cout<<"NO";
}