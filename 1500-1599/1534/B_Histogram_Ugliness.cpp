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
        vector<int> V(n);
        int c=0;
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        if(n==1){
            cout<<V[0]<<"\n";
            continue;
        }
                if(V[0]>V[1]){
            c+=V[0]-V[1];
            V[0]=V[1];
        }
        for(int i=1;i<n-1;i++){
            if(V[i]>V[i-1] and V[i]>V[i+1]){
                c+=V[i]-max(V[i-1],V[i+1]);
                V[i]=max(V[i-1],V[i+1]);
            }
            
        }

        if(V[n-1]>V[n-2]){
            c+=V[n-1]-V[n-2];
            V[n-1]=V[n-2];
        }
        c+=V[0]+V[n-1];
        for(int i=0;i<n-1;i++){
            c+=abs(V[i]-V[i+1]);
        }
        cout<<c<<"\n";
    }
}