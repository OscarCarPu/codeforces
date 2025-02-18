#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=1;i<=10000;i++){
        if(i*i>=n){
            cout<<4*i;
            return 0;
        }
        else if(i*(i+1)>=n){
            cout<<4*i+2;
            return 0;
        }
    }
}