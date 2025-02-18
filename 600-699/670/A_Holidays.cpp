#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    cout<<n/7*2+(n%7==6?1:0)<<" "<<n/7*2+min(n%7,2);
}