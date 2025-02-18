//an=a(n-1) + (n-1) + n*2;
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int v=0;
    vector<int> V;
    for(int i=1;v<=1e9;i++){
        v+=i*3-1;
        V.push_back(v);
    }
    int t;
    cin>>t;
    while(t--){
        int n,sol=0;
    cin>>n;
    int p=V.size()-1;
    while(n>0){
        while(p>=0 and V[p]>n){
            p--;
        }
        if(p==-1)break;
        sol++;
        n-=V[p];
    }
    cout<<sol<<"\n";
    }
}