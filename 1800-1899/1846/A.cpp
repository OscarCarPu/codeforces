#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        while(n--){
            int a,b;
            cin>>a>>b;
            cnt+=(a-b>0);
        }
        cout<<cnt<<"\n";
    }
}