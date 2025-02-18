#include <bits/stdc++.h>
using namespace std;
#define int long long
int upDiv(int a,int b){
    return (a+b)/b;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sol=LLONG_MAX;
    vector<int> V(n);
    for(int i=0;i<n;i++){
        cin>>V[i];
    }
    for(int i=0;i<n;i++){
        int x=0;
        int c=0;
        for(int j=i-1;j>=0;j--){
            c+=upDiv(x,V[j]);
            x=V[j]*upDiv(x,V[j]);
        }
        x=0;
        for(int j=i+1;j<n;j++){
            c+=upDiv(x,V[j]);
            x=V[j]*upDiv(x,V[j]);
        }
        sol=min(sol,c);
    }
    cout<<sol;
}