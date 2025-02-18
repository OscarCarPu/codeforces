#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    freopen("output.txt","w",stdout);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n=t;
        while(n>0){
            if(n%2)cout<<"B";
            else cout<<"A";
            n/=2;
        }
        cout<<endl;
    }
}