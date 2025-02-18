#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<b)swap(a,b);
        int sol=0;
        int aux=(a-b);
        if(b-aux>=0){
            sol=max(sol,aux);
            b-=aux;
            a-=aux*2;
        }
        else{
            sol=max(sol,b);
            b=0;
            a=0;
        }
        aux=a/3;
        a-=aux*3;
        b-=aux*3;
        sol+=aux*2;
        if(a==2)sol++;
        cout<<sol<<"\n";
    }
}