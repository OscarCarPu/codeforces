#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int h,c,t;
        cin>>h>>c>>t;
        if(2*t==h+c or t<=c){
            cout<<"2\n";
        }
        else{
            int a=(t-c)/(2*t-h-c);
            if(a<=0){
                cout<<"2\n";
                continue;
            }
            long double auxt=(h*a*1.0+1.0*c*(a-1))/(1.0*2*a-1);
            long double auxd=(h*(a+1)*1.0+1.0*c*a)/(1.0*2*a+1);
            if(abs(t-auxd)<abs(t-auxt)){
                a++;
            }
            cout<<2*a-1<<"\n";
        }
    }
}