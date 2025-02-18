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
        vector<int> lo(n,0),le(n,0);
        for(int i=0;i<n;i++){
            int c;
            cin>>c;
            c--;
            if(i%2){
                le[c]=lo[c]+1;
            }
            else{
                lo[c]=le[c]+1;
            }
        }
        for(int i=0;i<n;i++){cout<<max(lo[i],le[i])<<" ";}
        cout<<endl;
    }
}