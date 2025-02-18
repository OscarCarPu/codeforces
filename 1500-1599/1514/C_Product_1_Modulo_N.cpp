#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> sol;
    int aux=1;
    for(int i=1;i<n-1;i++){
        if(gcd(n,i)==1){
            sol.push_back(i);
            aux*=i;
            aux%=n;
        }
    }
    aux*=(n-1);
    aux%=n;
    if(aux==1){
        sol.push_back(n-1);
    }
    cout<<sol.size()<<"\n";
    for(int i : sol)cout<<i<<" ";
}