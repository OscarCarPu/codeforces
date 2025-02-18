#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sol=0;
    bool start=true;
    for(int i=0;i<n;i++){
        if(s[i]=='<' and start)sol++;
        if(s[i]=='>')start=false;
    }
    start=true;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='>' and start)sol++;
        if(s[i]=='<')start=false;
    }
    cout<<sol;
}