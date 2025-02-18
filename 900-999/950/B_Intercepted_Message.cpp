#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int p1=1,p2=1;
    int sol=0;
    int suma=a[0],sumb=b[0];
    while(p1<n or p2<m){
        if(suma==sumb){
            suma=a[p1++];
            sumb=b[p2++];
            sol++;
        }
        else if(suma>sumb){
            sumb+=b[p2++];
        }
        else{
            suma+=a[p1++];
        }
    }
    if(suma==sumb)sol++;
    cout<<sol;
}