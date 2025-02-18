#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,n;
    cin>>n>>k;
    vector<int> V(n);
    int net=0,stu=0;
    for(int i=0;i<n;i++){
        cin>>V[i];
        if(V[i]>0)net++;
        else stu++;
    }
    int sol=0;
    for(int i=0;i<n;i++){
        int xn=0,xs=0;
        if(V[i]>0)xn++;
        else xs++;
        for(int j=1;j<n;j++){
            if(i-j*k>=0){
                if(V[i-j*k]>0)xn++;
                else xs++;
            }
            if(i+j*k<n){
                if(V[i+j*k]>0)xn++;
                else xs++;
            }
        }
        sol=max(sol,abs((net-xn)-(stu-xs)));
    }
    cout<<sol;
}