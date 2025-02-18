#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,d;
    cin>>n>>d;
    int p=0;
    vector<int> V(n);
    int aux=0;
    for(int i=0;i<n;i++){
        cin>>V[i];
        aux+=V[i];
    }
    sort(V.begin(),V.end());
    int m;
    cin>>m;
    if(m<n){
        m=n-m;
        for(int i=n-1;i>=0 and m>0;i--){
            m--;
            aux-=V[i];
        }
    }
    else{
        aux-=(m-n)*d;
    }
    cout<<aux;
}