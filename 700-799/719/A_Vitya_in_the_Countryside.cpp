#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int V[n];
    for(int i=0;i<n;i++)cin>>V[i];
    if(V[n-1]==0){
        cout<<"UP";
    }
    else if(V[n-1]==15){
        cout<<"DOWN";
    }
    else if(n>=2){
        if(V[n-2]<V[n-1]){
            cout<<"UP";
        }
        else cout<<"DOWN";
    }
    else cout<<"-1";
}