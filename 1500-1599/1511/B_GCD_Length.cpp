#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int dig(int a){
    int c=0;
    while(a>0){
        a/=10;
        c++;
    }
    return c;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=2,y=2;
        while(dig(x)<c){
            x*=2;
            y*=2;
        }
        while(dig(x)<a)x*=3;
        while(dig(y)<b)y*=5;
        cout<<x<<" "<<y<<"\n";
    }
}