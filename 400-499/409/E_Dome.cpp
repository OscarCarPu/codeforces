#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long double a,b,r,x,y,R,eps=0.000001;
    cin>>r;
    for(a=1;a<11;a++){
        for(b=1;b<11;b++){
            x=a/2;
            y=b;
            R=sqrt(x*x+y*y);
            if(abs(a/2*b/R-r)<eps){
                cout<<a<<" "<<b<<endl;
                return 0;
            }
        }
    }
}