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
        for(int i=0; i<n; i++){
            cin>>V[i];
        }
        int sol=0;
        for(int i=1;i<n-1;i++){
            if(V[i]>V[i-1] and V[i]>V[i+1]){
                sol++;
                V[i+1]=max(V[i+1],V[i]);
                if(i<n-2){
                    V[i+1]=max(V[i+1],V[i+2]);
                }
            }
        }
        cout<<sol<<"\n";
        for(int i : V)cout<<i<<" ";
        cout<<"\n";
    }
}