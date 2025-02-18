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
    if(V[n-1]==0){
        cout<<"1 "<<V[0]<<"\n2 "<<V[1]<<" "<<V[2]<<"\n"<<n-3<<" ";
        for(int i=3;i<n;i++)cout<<V[i]<<" ";
    }else{
    cout<<"1 "<<V[0]<<"\n1 "<<V[n-1]<<"\n"<<n-2<<" ";
    for(int i=1;i<n-1;i++)cout<<V[i]<<" ";
    }
    
}