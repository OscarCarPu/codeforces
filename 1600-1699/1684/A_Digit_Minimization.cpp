#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(n==1){
            cout<<s[0]<<"\n";
        }
        else if(n==2){
            cout<<s[1]<<"\n";
        }
        else{
            int mi='z';
            for(char e : s){
                int x=e;
                mi=min(mi,x);
            }
            cout<<char(mi)<<"\n";
        }
    }
}