#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x=1,M=0;
    map<int,int> ph;
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        ph[a]++;
        if(ph[a]>M){
            M=ph[a];
            x=a;
        }
    }
    cout<<x;
}