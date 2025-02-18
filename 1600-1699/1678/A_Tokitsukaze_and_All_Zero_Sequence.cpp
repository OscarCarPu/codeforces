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
        set<int> S;
        bool eo=false;
        int c=0;
        while(n--){
            int x;
            cin>>x;
            if(x==0){
                eo=true;
            }
            else{
                if(S.count(x))eo=true;
                S.insert(x);
                c++;
            }
        }
        if(!eo)c++;
        cout<<c<<"\n";
    }
}