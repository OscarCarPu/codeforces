#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s(50,'a');
        cout<<s<<"\n";
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s[x]++;
            if(s[x]=='c')s[x]='a';
            cout<<s<<"\n";
        }
    }
}