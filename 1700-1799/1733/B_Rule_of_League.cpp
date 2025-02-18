#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        if(x>y)swap(x,y);
        if(x>=1 or y==0){
            cout<<"-1\n";
            continue;
        }
        if((n-1)%y==0){
            int aux=y;
            int act=1;
            for(int i=3;i<=(n+1);i++){
                aux--;
                cout<<act<<" ";
                if(aux==0){
                    act=i,aux=y;
                }
            }
            cout<<"\n";
        }
        else cout<<"-1\n";
    }
}