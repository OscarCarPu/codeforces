#include <bits/stdc++.h>
using namespace std;
#define int long long
void f(int& h,int& m){
    m++;
    if(m==60){
        m=0;
        h++;
    }
    h%=24;
}
bool is(int h,int m){
    return h/10==m%10 and h%10==m/10;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m=0,h=0;
    char e;
    cin>>e;
    h+=(e-'0')*10;
    cin>>e;
    h+=(e-'0');
    cin>>e>>e;
    m+=(e-'0')*10;
    cin>>e;
    m+=(e-'0');
    f(h,m);
    while(is(h,m)==false){
        f(h,m);
    }
    if(h<10)cout<<"0";
    cout<<h<<":";
    if(m<10)cout<<"0";
    cout<<m;
}