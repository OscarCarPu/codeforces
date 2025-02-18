#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sol=LLONG_MAX;
    vector<int> V(n),P(n);
    for(int i=0;i<n;i++){
        cin>>V[i];
        P[i]=(V[i]+1)/2;
    }
    sort(P.begin(),P.end());
    sol=P[0]+P[1];
    for(int i=1;i<n;i++){
        int a=V[i],b=V[i-1];
        if(a<b)swap(a,b);
        int aux=min((a-b),(a+1)/2);
        a-=aux*2;
        b-=aux;
        a=max(a,0LL);
        b=max(b,0LL);
        aux+=2*(a/3);
        a-=a/3*3;
        b-=b/3*3;
        if(a==2 and b==2)aux+=2;
        else if(a)aux++;
        sol=min(sol,aux);
    }
    cout<<endl;
    for(int i=2;i<n;i++){
        int aux=min(V[i-2],V[i])+(max(V[i-2],V[i])-min(V[i-2],V[i])+1LL)/2;
        sol=min(sol,aux);
    }
    cout<<sol;
}