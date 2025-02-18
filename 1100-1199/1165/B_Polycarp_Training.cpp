#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    for(int& i : V)cin>>i;
    int act=1;
    sort(V.begin(), V.end());
    for(int i=0;i<n;i++){
        if(V[i]>=act){
            act++;
        }
    }
    cout<<act-1;
}