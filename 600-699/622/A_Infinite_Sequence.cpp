#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int high=1e9;
    int low=1;
    int res;
    int val;
    while(high>=low){
        int mid=(high+low)>>1;
        int v=(mid*(mid+1))/2;
        if(n>v){
            res=mid;
            low=mid+1;
            val=v;
        }
        else{
            high=mid-1;
        }
    }
    for(int i=1;i<=1e9;i++){
        if(val+i==n){
            cout<<i;
            return 0;
        }
    }
}