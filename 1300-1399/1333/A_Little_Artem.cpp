#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n*m%2==1){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(i%2==j%2){
                        cout<<"B";
                    }
                    else cout<<"W";
                }
                cout<<"\n";
            }
        }
        else{
            cout<<"B";
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(i==0 and j==0)continue;
                    if(i%2!=j%2)cout<<"B";
                    else cout<<"W";
                }
                cout<<"\n";
            }
        }
    }
}