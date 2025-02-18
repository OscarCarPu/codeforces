#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            cout<<"YES\n"<<s[i-1]<<s[i]<<"\n";
            return 0;
        }
    }
    cout<<"NO";
}