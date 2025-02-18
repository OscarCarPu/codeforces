#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        if(k==1){
            cout<<(n-1)/2<<"\n";
        }
        else{
            int cnt=0;
            for(int i=1;i<n-1;i++){
                if(V[i]>V[i-1]+V[i+1])cnt++;
            }
            cout<<cnt<<"\n";
        }
    }
}