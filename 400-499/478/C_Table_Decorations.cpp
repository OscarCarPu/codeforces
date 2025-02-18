#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min((a+b+c)/3,(a+b+c)-max(a,max(b,c)));
}