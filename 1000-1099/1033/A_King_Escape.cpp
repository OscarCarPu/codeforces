#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a1,a2,b1,b2,c1,c2;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    if(abs(a1-c1)==abs(c2-a2) or (a1<c1 and a1>b1) or (a1>c1 and a1<b1) or (a2>c2 and a2<b2) or (a2>b2 and a2<c2)){
        cout<<"NO";
    }
    else cout<<"YES";
}