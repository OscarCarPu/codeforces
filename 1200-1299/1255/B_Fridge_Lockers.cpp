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
        int c=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            c+=x;
        }
        if(n==m and n!=2){
            cout<<c*2<<"\n";
            for(int i=0;i<n-1;i++){
                cout<<i+1<<" "<<i+2<<"\n";
            }
            cout<<n<<" 1\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}