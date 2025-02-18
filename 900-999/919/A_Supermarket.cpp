#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    double cost=1e9;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        cost=min(cost,(double)a/b);
    }
    cout<<setprecision(10)<<cost*m;
}