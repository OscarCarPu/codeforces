#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> V(5,0);
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        V[x]++;
    }
    int sol=0;
    sol+=V[4];
    sol+=V[3];
    V[1]-=V[3];
    V[1]=max(V[1],0LL);
    V[2]+=V[1]/2;
    V[1]-=(V[1]/2)*2;
    sol+=(V[2]+1)/2;
    if(V[2]%2==0 and V[1]>0)sol++;
    cout<<sol;

}