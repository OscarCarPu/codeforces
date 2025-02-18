#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<int,int> M1,M2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        M1[x]=i+1;
        M2[x]=n-i;
    }
    int m;
    cin>>m;
    int a1=0,a2=0;
    while(m--){
        int x;
        cin>>x;
        a1+=M1[x];
        a2+=M2[x];
    }
    cout<<a1<<" "<<a2<<"\n";
}