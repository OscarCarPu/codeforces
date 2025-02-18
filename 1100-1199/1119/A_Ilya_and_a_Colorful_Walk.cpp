#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    int sol=0;
    for(int i=0;i<n;i++){
        if(A[i]!=A[0]){
            sol=max(sol,i);
        }
        if(A[i]!=A[n-1]){
            sol=max(sol,(n-1)-i);
        }
    }
    cout<<sol;
}