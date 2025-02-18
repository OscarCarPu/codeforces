#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,a=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i+=2){
            if(s[i]!=s[i+1])a++;
        }
        cout<<a<<"\n";
    }
}