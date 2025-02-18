#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    cin>>n>>a>>b;
    int sol=0;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    for(int i=0;i<n/2;i++){
        int c0=0,c1=0,c2=0;
        if(V[i]==0)c0++;
        else if(V[i]==1)c1++;
        else c2++;
        if(V[n-i-1]==0)c0++;
        else if(V[n-i-1]==1)c1++;
        else c2++;
        if((c0==1 and c1==1)){
            sol=-1;
            break;
        }
        if(c2==1){
            if(c1)sol+=b;
            if(c0)sol+=a;
        }
        if(c2==2){
            sol+=min(a,b)*2;
        }
    }
    if(n%2 and sol>=0){
        if(V[n/2]==2)sol+=min(a,b);
    }
    cout<<sol;
}