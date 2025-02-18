#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int zeros=0,ones=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')zeros++;
            else ones++;
        }
        if(ones==zeros)ones--;
        cout<<min(ones,zeros)<<"\n";
    }
}