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
        int e=0,o=0;
        vector<int> V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        sort(V.begin(),V.end());
        bool tog=false;
        for(int i=0;i<n;i++){
            if(V[i]%2)o++;
            else e++;
            if(i){
                if(V[i]-1==V[i-1])tog=true;
            }
        }
        if(o%2==e%2 and (tog or o%2==0))cout<<"YES\n";
        else cout<<"NO\n";
    }
}