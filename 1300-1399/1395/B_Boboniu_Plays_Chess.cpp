#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    for(int i=1;i<=n;i++){
        if(i&1){
            for(int j=1;j<=m;j++){
                cout<<(i+x-2)%n+1<<" "<<(j+y-2)%m+1<<"\n";
            }
        }
        else{
            for(int j=m;j>=1;j--){
                cout<<(i+x-2)%n+1<<" "<<(j+y-2)%m+1<<"\n";
            }
        }
    }
}