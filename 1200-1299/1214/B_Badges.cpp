#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int b,g,n;
    cin>>b>>g>>n;
    int sol=0;
    for(int i=0;i<=n;i++){
        if(b>=n-i and g>=i)sol++;
    }
    cout<<sol;
}