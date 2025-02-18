#include <bits/stdc++.h>
using namespace std;
#define int long double 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int sol=0;
    for(int i=1;i<=n;i++){
        sol+=1/i;
    }
    cout<<setprecision(7)<<fixed<<sol;
}