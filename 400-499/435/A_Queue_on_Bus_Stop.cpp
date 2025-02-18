#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int sol=0;
    int x=0;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        if(x+y>m){
            sol++;
            x=y;
        }
        else x+=y;
    }
    if(x>0)sol++;
    cout<<sol;
}