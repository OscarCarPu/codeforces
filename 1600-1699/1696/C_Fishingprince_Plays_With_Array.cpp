#include <bits/stdc++.h>
using namespace std;
#define int long long
int poW(int a,int p){
    if(p==0)return 1LL;
    if(p==1)return a;
    return poW(a*a,p/2)*(p%2==1?a:1LL);
}
pair<int,int> select(int n,int k){
    int sol=0;
    for(int i=0;i<=40;i++){
        if(n%poW(k,i)==0){
            sol=poW(k,i);
        }
        else break;
    }
    return {n/sol,sol};
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        queue<pair<int,int>> I;
        int x;
        cin>>x;
        auto aux=select(x,m);
        int cont=aux.second;
        int num=aux.first;
        for(int i=1;i<n;i++){
            cin>>x;
            aux=select(x,m);
            if(num!=aux.first){
                I.push({num,cont});
                num=aux.first;
                cont=aux.second;
            }
            else{
                cont+=aux.second;
            }
        }
        I.push({num,cont});
        int k;
        cin>>k;
        bool can=true;
        for(int i=0;i<k;i++){
            cin>>x;
            aux=select(x,m);
            num=aux.first;
            cont=aux.second;
            if(I.size() and num==I.front().first and cont<=I.front().second){
                I.front().second-=cont;
                if(I.front().second==0)I.pop();
            }
            else can=false;
        }
        if(I.size())can=false;
        if(can)cout<<"Yes\n";
        else cout<<"No\n";
    }
}