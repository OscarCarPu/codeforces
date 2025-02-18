#include <bits/stdc++.h>
using namespace std;
int a,b;
int fib(int n){
    if(n%3==0)return a;
    if(n%3==1)return b;
    else return (a^b);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>a>>b>>n;
        cout<<fib(n)<<"\n";
    }
}