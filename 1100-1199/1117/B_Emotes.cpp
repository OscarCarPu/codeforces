#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> V(n);
    for(int i=0;i<n;i++){
        cin>>V[i];
    }
    sort(V.rbegin(),V.rend());
    int sol=((V[0]*k)+V[1])*m/(k+1);
    sol+=(V[0])*(m%(k+1));
    cout<<sol;
}