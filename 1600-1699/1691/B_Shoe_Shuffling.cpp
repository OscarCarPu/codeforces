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
        for(int i=0;i<n;i++)cin>>V[i];
        vector<int> sol;
        int id=0;
        for(int i=1;i<n;i++){
            if(V[i]!=V[i-1]){
                if(id==i-1){
                    id=-1;
                    break;
                }
                else{
                    sol.push_back(id);
                    id=i;
                }
            }
            else{
                sol.push_back(i);
            }
        }
        sol.push_back(id);
        if(id==-1 or id==n-1){
            cout<<"-1\n";
        }
        else{
            for(int i : sol)cout<<i+1<<" ";
            cout<<"\n";
        }
    }
}