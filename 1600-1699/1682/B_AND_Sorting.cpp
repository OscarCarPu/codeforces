#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int x=-1;
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            if(y!=i){
                if(x==-1)x=y;
                else x=x&y;
            }
        }
        cout<<x<<"\n";
    }
}