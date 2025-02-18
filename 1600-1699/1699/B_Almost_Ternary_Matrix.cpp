#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i%4==0 or i%4==3){
                    if(j%4==0 or j%4==3){
                        cout<<"1 ";
                    }
                    else cout<<"0 ";
                }
                else{
                    if(j%4==0 or j%4==3){
                        cout<<"0 ";
                    }
                    else cout<<"1 ";
                }
            }
            cout<<"\n";
        }
    }
}