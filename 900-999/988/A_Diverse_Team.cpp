#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<bool> V(101,false);
    vector<int> sol;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(V[x]==false){
            sol.push_back(i);
            V[x] = true;
            k--;
        }
        if(k==0)break;
    }
    if(k==0){
        cout<<"YES\n";
        for(int i : sol)cout<<i<<" ";
    }
    else cout<<"NO\n";
    return 0;
}