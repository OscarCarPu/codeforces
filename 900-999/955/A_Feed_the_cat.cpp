#include <bits/stdc++.h>
using namespace std;
#define int long long
int upDiv(int a,int b){
    return (a+b-1)/b;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int h,m,H,D,C,N;
    cin>>h>>m>>H>>D>>C>>N;
    double sol=1.0*C*upDiv(H,N);
    while(h<20){
        m++;
        H+=D;
        if(m==60){
            m=0;
            h++;
        }
    }
    sol=min(sol,(1.0*C*upDiv(H,N))/10*8);
    cout<<setprecision(4)<<fixed<<sol;
}