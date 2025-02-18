#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2){
            cout<<"1 ";
            for(int i=3;i<=n;i+=2){
                cout<<i<<" "<<i-1<<" ";
            }
            cout<<"\n";
        }
        else{
            for(int i=2;i<=n;i+=2){
                cout<<i<<" "<<i-1<<" ";
            }
            cout<<"\n";

        }
    }
}