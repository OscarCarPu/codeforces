#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e9;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sol=0;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            sol+=n;
            n/=i;
        }
    }
    if(n>1)sol+=n;
    sol++;
    cout<<sol;
}