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
        int k=0;
        int nn=n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1 and nn>0){
                k++;
            }
            else{
                nn=0;
            }
        }
        if(k==n)k++;
        if(k%2)cout<<"Second\n";
        else cout<<"First\n";
    }
}