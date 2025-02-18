#include <bits/stdc++.h>
using namespace std;
#define ld long double
ld dist(ld x,ld y,ld x2,ld y2){
    return sqrtl((x-x2)*(x-x2)+(y-y2)*(y-y2));
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    ld sol=0;
    ld x,y;
    cin>>x>>y;
    for(int i=1;i<n;i++){
        ld nx,ny;
        cin>>nx>>ny;
        sol+=dist(x,y,nx,ny);
        x=nx;
        y=ny;
    }
    sol*=k;
    sol/=50;
    cout<<setprecision(9)<<fixed<<sol;
}