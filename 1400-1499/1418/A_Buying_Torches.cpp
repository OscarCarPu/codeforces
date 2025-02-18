#include <bits/stdc++.h>
using namespace std;
#define int long long
int upDiv(int a,int b){
    return (a+b-1)/b;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int x,y,k;
        cin >> x >> y >> k;
        int ned=k*(y+1)-1;
        cout<<upDiv(ned,x-1)+k<<"\n";
    }
}