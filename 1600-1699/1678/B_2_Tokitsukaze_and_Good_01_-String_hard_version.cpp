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
        int c=0;
        bool z=false,o=false;
        for(int i=0;i<n;i+=2){
            if(s[i]!=s[i+1])a++;
            else if(s[i]=='0'){
                if(o==false){
                    o=true;
                    z=false;
                    c++;
                }
            }
            else{
                if(z==false){
                    z=true;
                    o=false;
                    c++;
                }
            }
        }
        if(z==o)c++;
        cout<<a<<" "<<c<<"\n";
    }
}