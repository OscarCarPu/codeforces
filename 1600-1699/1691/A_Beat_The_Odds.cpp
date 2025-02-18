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
        int odd=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2)odd++;
        }
        cout<<min(odd,n-odd)<<"\n";
    }
}