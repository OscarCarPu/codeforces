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
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        vector<int> B(n,0);
        int pos=n,last=n-1;
        for(int i=n-1;i>=0;i--){
            if(V[i]!=pos)continue;
            else{
                for(int j=i;j<=last;j++){
                    cout<<V[j]<<" ";
                    B[V[j]-1]=1;
                }
                while(B[pos-1]==1)pos--;
                last=i-1;
            }
        }
        cout<<"\n";
    }
}
//4 3 2 1