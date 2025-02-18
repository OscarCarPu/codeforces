#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    cout<<min((n%m)*b,(m-(n%m))*a);
}