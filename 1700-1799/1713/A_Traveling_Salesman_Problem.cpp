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
        int maX=0,miX=0,maY=0,miY=0;
        while(n--){
            int a,b;
            cin>>a>>b;
            if(a==0){
                maY=max(maY,b);
                miY=min(miY,b);
            }
            if(b==0){
                maX=max(maX,a);
                miX=min(miX,a);
            }
        }
        cout<<2*(maX+abs(miX)+maY+abs(miY))<<"\n";
    }
}