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
        bool turn=false;
        while(n--){
            int x;
            cin>>x;
            if(turn){
                cout<<abs(x)<<" ";
            }
            else{
                cout<<-1*abs(x)<<" ";
            }
            turn^=1;
        }
        cout<<"\n";
    }
}