#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int sol=-1;
    int best=LLONG_MAX;
    for(int i=1;i<=100;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(a[j]>i){
                c+=a[j]-(i+1);
            }
            else if(a[j]<i){
                c+=(i-1)-(a[j]);
            }
        }
        if(c<best){
            best=c;
            sol=i;
        }
    }
    cout<<sol<<" "<<best;
}