#include <bits/stdc++.h>
using namespace std;
int a[600];
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l=0,r=0;
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       while(l<n-1 and a[l]==l+1)l++;
       r=l;
       while(a[r]!=l+1)r++;
       r++;
       reverse(a+l,a+r);
       for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<"\n";
    }
}