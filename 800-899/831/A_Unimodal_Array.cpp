#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    bool sol=true;
    for(int i=0;i<n;i++)cin>>V[i];
    int pos1=0;
    for(;pos1<n;pos1++){
        if(V[pos1]>=V[pos1+1]){
            break;
        }
    }
    int pos2=n-1;
    for(;pos2>=0;pos2--){
        if(V[pos2]>=V[pos2-1])break;
    }
    for(int i=pos1;i<pos2;i++){
        if(V[i]!=V[i+1])sol=false;
    }
    if(sol)cout<<"YES";
    else cout<<"NO";
}