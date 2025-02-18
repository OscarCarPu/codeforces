#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="YES" or s=="YEs" or s=="YeS" or s=="Yes" or s=="yES" or s=="yEs" or s=="yeS" or s=="yes")cout<<"YES\n";
        else cout<<"NO\n";
    }
}