#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k1,k2,w,b;
        cin>>n>>k1>>k2>>w>>b;
        if(w<=(k1+k2)/2 and b<=((n-k2)+(n-k1))/2){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}