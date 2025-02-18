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
        vector<int> V(n),S(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
            S[i]=V[i];
        }
        sort(S.begin(),S.end());
        int a=0,b=0;
        for(int i=0;i<k;i++){
            if(V[i]>S[k-1])a++;
        }
        for(int i=k;i<n;i++){
            if(V[i]<S[k-1])b++;
        }
        cout<<max(a,b)<<"\n";
    }
}