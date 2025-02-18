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
        int f=-1,l=-1;
        int bef;
        cin>>bef;
        for(int i=1;i<n;i++){
            int act;
            cin>>act;
            if(act==bef){
                if(f==-1)f=i-1;
                l=i;
            }
            bef=act;
        }
        int x=l-f+1;
        if(x<3)cout<<"0\n";
        else if(x==3)cout<<"1\n";
        else cout<<x-3<<"\n";
    }
}