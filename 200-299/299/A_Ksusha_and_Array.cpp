#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    sort(V.begin(),V.end());
    for(int i=1;i<n;i++){
        if(V[i]%V[0]!=0){
            cout<<"-1";
            return 0;
        }
    }
    cout<<V[0];
}