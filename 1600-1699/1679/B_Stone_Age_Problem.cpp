#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<int> V(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>V[i];
        sum+=V[i];
    }
    int all=-1;
    vector<bool> B(n,false);
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int i,x;
            cin>>i>>x;
            i--;
            if(B[i]){
                B[i]=false;
                V[i]=all;
            }
            sum-=V[i];
            V[i]=x;
            sum+=V[i];
            cout<<sum<<"\n";
        }
        else{
            cin>>all;
            sum=all*n;
            B=vector<bool>(n,true);
            cout<<sum<<"\n";
        }
    }
}