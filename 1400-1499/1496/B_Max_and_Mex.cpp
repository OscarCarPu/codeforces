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
        int v=0;
        int last=0;
        set<int> S;
        vector<int> V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        sort(V.begin(),V.end());
        for(int i=0;i<n;i++){
            S.insert(V[i]);
            last=V[i];
            if(v==V[i])v++;
        }
        if(v>last){
            cout<<S.size()+k<<"\n";
        }
        else{
            if(S.count((v+last+1)/2) or k==0){
                cout<<S.size()<<"\n";
            }
            else{
                cout<<S.size()+1<<"\n";
            }
        }
    }
}