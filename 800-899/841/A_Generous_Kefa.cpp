#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int M=0;
    map<char,int> m;
    for(int i=0;i<n;i++){
        char e;
        cin>>e;
        m[e]++;
        M=max(M,m[e]);
    }
    cout<<((M>k)?"NO":"YES");
}