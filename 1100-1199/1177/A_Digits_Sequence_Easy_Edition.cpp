#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin>>k;
    string s;
    for(int a=1;s.size()<=10000;a++)s+=to_string(a);
    cout<<s[k-1];
}