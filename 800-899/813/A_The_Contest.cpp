#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sum=0;
    while(n--){
        int x;
        cin>>x;
        sum+=x;
    }
    int m;
    cin>>m;
    int sol=-1;
    while(m--){
        int a,b;
        cin>>a>>b;
        if(sol!=-1)continue;
        if(sum<=b){
            sol=max(sum,a);
        }
    }
    cout<<sol;
}