#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin>>n;
    int sol=0;
    int aux=(1<<n.length());
    for(int i=0;i<n.length();i++){
        sol*=2;
        if(n[i]=='7')sol++;
    }
    sol+=aux-1;
    cout<<sol;
}