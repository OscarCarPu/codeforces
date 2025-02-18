#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int p1=1,p2=2,s=3;
    int n;
    cin>>n;
    bool sol=true;
    while(n--){
        int x;
        cin>>x;
        if(x==s){
            sol=false;
        }
        else if(x==p1){
            swap(p2,s);
        }
        else if(x==p2){
            swap(p1,s);
        }
    }
    if(sol)cout<<"YES";
    else cout<<"NO";
}