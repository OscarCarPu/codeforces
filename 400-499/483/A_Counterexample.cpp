#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int l,r;
    cin>>l>>r;
    if(abs(l-r)<2)cout<<"-1\n";
    else if(l%2){
        if(abs(l-r)<3)cout<<"-1\n";
        else{
            cout<<l+1<<" "<<l+2<<" "<<l+3<<"\n";
        }
    }
    else{
        cout<<l<<" "<<l+1<<" "<<l+2;
    }
}