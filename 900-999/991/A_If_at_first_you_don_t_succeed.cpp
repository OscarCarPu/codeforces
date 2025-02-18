#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int n1=a-c;
    int n2=b-c;
    int n3=c;
    int n4=n-n1-n2-n3;
    if(n1>=0 and n2>=0 and n3>=0 and n4>0)cout<<n4;
    else cout<<-1;
}