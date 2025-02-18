#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int x=1;
    while(x*x<=n){
        x++;
    }
    x--;
    int sol=x*2+2;
    if(x*x==n)sol=x*2;
    else if(x*x+((x+1)*(x+1)-x*x)/2>=n)sol--;
    cout<<sol;
}