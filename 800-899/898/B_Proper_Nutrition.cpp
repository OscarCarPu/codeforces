#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=0;i<=n;i++){
        if(n-a*i<0)break;
        if((n-a*i)%b==0){
            cout<<"YES\n";
            cout<<i<<" "<<(n-a*i)/b;
            return 0;
        }
    }
    cout<<"NO";
}