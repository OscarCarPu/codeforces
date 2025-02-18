/*
a*b=x
b*c=y
c*a=z

aa=xz/y
b=x/a
c=y/b*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    int a=sqrt(x*z/y);
    int b=x/a;
    int c=y/b;
    cout<<a*4+b*4+c*4;
}