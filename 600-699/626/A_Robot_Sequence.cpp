#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> U(n+1),D(n+1),L(n+1),R(n+1);
    int x=0,y=0;
    for(int i=0;i<n;i++){
        char e;
        cin>>e;
            U[i+1]+=U[i];
            R[i+1]+=R[i];
            L[i+1]+=L[i];
            D[i+1]+=D[i];
        if(e=='U')U[i+1]++,y++;
        if(e=='D')D[i+1]++,y--;
        if(e=='R')R[i+1]++,x++;
        if(e=='L')L[i+1]++,x--;
    }
    int sol=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int ay=(U[j+1]-U[i])-(D[j+1]-D[i]);
            int ax=(R[j+1]-R[i])-(L[j+1]-L[i]);
            if(ay==0 and ax==0)sol++;
        }
    }
    cout<<sol;
}