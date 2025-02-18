#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int N=0;
    for(int i=0; i<n; i++){
        if(s[i]=='1')N++;
        else break;
    }
    cout<<min(n,N+1);
}