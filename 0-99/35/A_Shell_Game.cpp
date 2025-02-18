#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int V[3];
    V[0]=0,V[1]=0,V[2]=0;
    V[n-1]=1;
    for(int i=0;i<3;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        swap(V[a],V[b]);
    }
    for(int i : {0,1,2}){
        if(V[i]==1){
            cout<<i+1;
            return 0;
        }
    }
}