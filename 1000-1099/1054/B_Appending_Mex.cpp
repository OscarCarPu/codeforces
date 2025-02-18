#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int x=-1;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        if(y>x+1){
            cout<<i+1;
            return 0;
        }
        x=max(x,y);
    }
    cout<<-1;
}