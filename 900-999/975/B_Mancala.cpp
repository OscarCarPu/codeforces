#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> V(14);
    for(int i=0;i<14;i++)cin>>V[i];
    int sol=0;
    for(int i=0;i<14;i++){
        int aux=0;
        if((V[i]/14)%2==0)aux+=V[i]/14;
        int x=0;
        for(int j=i+1;j!=i;j++){
            x++;
            if(j==14)j=0;
            int cnt=V[j];
            if(V[i]%14>=x){
                cnt++;
            }
            cnt+=V[i]/14;
            if(cnt%2==0)aux+=cnt;
            if(j==i)break;
        }
        sol=max(sol,aux);
    }
    cout<<sol;
}