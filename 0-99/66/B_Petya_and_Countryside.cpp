#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int bef;
    cin>>bef;
    bool up=true;
    int sol=1;
    int aux=1;
    int auxx=1;
    for(int i=1;i<n;i++){
        int act;
        cin>>act;
        if(up){
            if(act<bef){
                up=false;
            }
            aux++;
        }
        else{
            if(act<bef){
                aux++;
                auxx=1;
            }
            else if(act==bef){
                auxx++;
                aux++;
            }
            else{
                sol=max(sol,aux);
                aux=auxx+1;
                auxx=1;
                up=true;
            }
        }
        bef=act;
    }
    sol=max(sol,aux);
    cout<<sol;
}