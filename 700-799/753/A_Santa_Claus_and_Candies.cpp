#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a=0;
    vector<int> sol;
    while(n>0){
        a++;
        if(a>n){
            sol[sol.size()-1]+=n;
            n=0;
        }
        else{
            n-=a;
            sol.push_back(a);
        }
    }
    cout<<sol.size()<<endl;
    for(int i : sol)cout<<i<<" ";
}