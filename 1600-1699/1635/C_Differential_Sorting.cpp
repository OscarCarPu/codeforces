#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> V(n);
        cin>>V[0];
        bool done=true;
        for(int i=1; i<n; i++){
            cin>>V[i];
            if(V[i]<V[i-1])done=false;
        }
        if(done){
            cout<<"0\n";
            continue;
        }
        if(V[n-1]<V[n-2] or (V[n-1]<0 and V[n-2]<0)){
            cout<<"-1\n";
            continue;
        }
        cout<<n-2<<"\n";
        for(int j=n-2;j>=1;j--){
            cout<<j<<" "<<j+1<<" "<<n<<"\n";
        }
    }
}