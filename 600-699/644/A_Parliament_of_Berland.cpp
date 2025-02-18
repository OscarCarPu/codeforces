#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    cin>>n>>a>>b;
    vector<vector<int>> G(a,vector<int>(b));
    int x=1,y=2;
    if(n==1)y=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if((i+j)%2==0){
                G[i][j]=x;
                if(x==0)continue;
                x+=2;
                if(x>n)x=0;
            }
            else{
                G[i][j]=y;
                if(y==0)continue;
                y+=2;
                if(y>n)y=0;
            }
        }
    }
    if(y==0 and x==0){
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout<<G[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else cout<<-1;
}