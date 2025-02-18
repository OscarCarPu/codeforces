#include <bits/stdc++.h>
using namespace std;
#define int long long
void f(int& m,int& h){
    m++;
    if(m==60){
        h++;
        m=0;
    }
    if(h==24)h=0;
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
    int sol=0;
    while(h/10!=m%10 or h%10!=m/10){
        f(m,h);
        sol++;
    }
    cout<<sol;
}