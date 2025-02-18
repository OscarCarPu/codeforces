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
        cout<<"2\n";
        bool B[n+1];
        for(int i=0;i<=n;i++)B[i]=false;
        for(int i=1;i<=n;i++){
            if(B[i])continue;
            for(int j=1;j*i<=n;j*=2){
                B[j*i]=true;
                cout<<j*i<<" ";
            }
        }
        cout<<endl;
    }
 }