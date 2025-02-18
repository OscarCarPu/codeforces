#include <bits/stdc++.h>
using namespace std;
#define int long long
int cnt1,cnt2,p1,p2;
bool f(int m){
    int d1=m/p1;
    int d2=m/p2;
    int d12=m/(p1*p2);
    int acnt1=cnt1,acnt2=cnt2;
    int valid=m-d1-d2+d12;
    d1-=d12;
    d2-=d12;
    acnt1-=d2;
    acnt2-=d1;
    if(acnt1>0){
        valid-=acnt1;
    }
    if(acnt2>0){
        valid-=acnt2;
    }
    return valid>=0;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>cnt1>>cnt2>>p1>>p2;

    int high=LLONG_MAX;
    int low=1;
    int res=high;
    while(high>=low){
        int mid=(high+low)/2;
        if(f(mid)){
            high=mid-1;
            res=mid;
        }
        else low=mid+1;
    }
    cout<<res;
}