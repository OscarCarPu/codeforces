#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,sol=0;
    cin>>a>>b;
    while(a>0 and b>0){
        sol++;
        if(a<b){
            a++;
            b-=2;
        }
        else{
            b++;
            a-=2;
        }
        if(a<0 or b<0)sol--;
    }
    cout<<sol;
}