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
        bool turn=true;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(k%2){
                if(x<=k/2)cout<<"1 ";
                else cout<<"0 ";
            }
            else{
                if(x<k/2)cout<<"1 ";
                else if(x>k/2)cout<<"0 ";
                else{
                    if(turn)cout<<"1 ";
                    else cout<<"0 ";
                    turn^=1;
                }
            }
        }
        cout<<"\n";
    }
}