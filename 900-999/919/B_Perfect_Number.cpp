#include <bits/stdc++.h>
using namespace std;
#define int long long
bool sum(int a){
     int sum=0;
     while(a>0){
         sum+=a%10;
         a/=10;
     }
     return sum==10;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> V;
    int x=0;
    while(V.size()<10001){
        if(sum(x)){
            V.push_back(x);
        }
        x++;
    }
    int n;
    cin>>n;
    cout<<V[n-1];
}