#include <bits/stdc++.h>
using namespace std;
#define int long long
int bits[21];
int poW(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a,p/2)*(p%2?a:1LL);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sol=0;
    while(n--){
        int x;
        cin>>x;
        int pos=0;
        while(x>0){
            if(x%2)bits[pos]++;
            x/=2;
            pos++;
        }
    }
    while(true){
        int aux=0;
        for(int i=0;i<21;i++){
            if(bits[i]){
                aux+=poW(2,i);
                bits[i]--;
            }
        }
        if(aux==0)break;
        sol+=aux*aux;
    }
    cout<<sol;
}