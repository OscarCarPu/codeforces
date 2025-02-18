#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int f=t1*2+v1*s;
    int S=t2*2+v2*s;
    if(f<S)cout<<"First";
    else if(S<f)cout<<"Second";
    else cout<<"Friendship";
}