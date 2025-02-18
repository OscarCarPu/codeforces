#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int one=0,zero=n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='1')one=i;
            else if(s[i]=='0' and zero==n-1){
                zero=i;
            }
        }
        cout<<zero-one+1<<"\n";
    }
}