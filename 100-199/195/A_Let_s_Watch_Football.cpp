#include <bits/stdc++.h>
using namespace std;
#define int long long
int a,b,c,all;
bool pos(int x){
    return all*b>=(all-x)*a;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>a>>b>>c;
    all=(c*a+b-1)/b;
    int high=all,low=0;
    int res;
    while(high>=low){
        int mid=(high+low)/2;
        if(pos(mid)){
            high=mid-1;
            res=mid;
        }
        else low=mid+1;
    }
    cout<<res;
}