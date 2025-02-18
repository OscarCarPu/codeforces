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
        vector<int> V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        sort(V.begin(),V.end());
        int i=0,j=1;
        while(V[j]-V[i]!=k and j<n){
            if(V[j]-V[i]>k){
                if(i+1!=j){
                    i++;
                }
                else{
                    i++;
                    j++;
                }
            }
            else{
                j++;
            }
        }
        if(j<n and V[j]-V[i]==k)cout<<"YES\n";
        else cout<<"NO\n";
    }
}