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
        int c[3];
        for(int i : {0,1,2})c[i]=0;
        while(n--){
            int x;
            cin>>x;
            c[x%3]++;
        }
        int sol=min(c[1],c[2]);
        c[1]-=sol;
        c[2]-=sol;
        sol+=c[1]/3;
        sol+=c[2]/3;
        sol+=c[0];
        cout<<sol<<"\n";
    }
}