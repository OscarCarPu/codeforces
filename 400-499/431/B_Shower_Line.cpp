#include <bits/stdc++.h>
using namespace std;
#define int long long
int G[5][5];
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)cin>>G[i][j];
    }
    int sol=0;
    for(int i1=0;i1<5;i1++){
        for(int i2=0;i2<5;i2++){
            for(int i3=0;i3<5;i3++){
                for(int i4=0;i4<5;i4++){
                    for(int i5=0;i5<5;i5++){
                        if(i1==i2 or i1==i3 or i1==i4 or i1==i5 or i2==i3 or i2==i4 or i2==i5 or i3==i4 or i3==i5 or i4==i5)continue;
                        int aux=G[i1][i2]+G[i2][i1]+G[i3][i4]*2+G[i4][i3]*2+G[i2][i3]+G[i3][i2]+G[i4][i5]*2+G[i5][i4]*2;
                        sol=max(sol,aux);
                    }
                }
            }
        }
    }
    cout<<sol;
}