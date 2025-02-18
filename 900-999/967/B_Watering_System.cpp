#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> V(n-1);
    int x;
    cin>>x;
    int sum=x;
    for(int i=0;i<n-1;i++)cin>>V[i],sum+=V[i];
    sort(V.rbegin(),V.rend());
    if((1.0*a*x/sum)>=b){
        cout<<0;
        return 0;
    }
    for(int j=0;j<n-1;j++){
        sum-=V[j];
        if((1.0*a*x/sum)>=b){
            cout<<j+1;
            return 0;
        }
    }
}