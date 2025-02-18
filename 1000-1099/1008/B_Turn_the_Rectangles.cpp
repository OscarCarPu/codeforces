#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int bef=1e9;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a<b)swap(a,b);
        if(a<=bef){
            bef=a;
        }
        else if(b<=bef){
            bef=b;
        }
        else{
            bef=-1;
        }
    }
    if(bef==-1)cout<<"NO\n";
    else cout<<"YES\n";
}