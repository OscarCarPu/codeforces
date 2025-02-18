#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>V[i];
        sum+=V[i];
    }
    int a,b;
    cin>>a>>b;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum-=V[i];
        sum2+=V[i];
        if(sum2>=a and sum2<=b and sum>=a and sum<=b){
            cout<<i+2<<"\n";
            return 0;
        }
    }
    cout<<0;
}