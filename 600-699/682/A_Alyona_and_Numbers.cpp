#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int A[5],B[5];
    int xa=a%5;
    int xb=b%5;
    for(int i=0;i<5;i++){
        A[i]=a/5+((xa>=i and i>0)?1LL:0LL);
        B[i]=b/5+((xb>=i and i>0)?1LL:0LL);
    }
    int sol=0;
    for(int i=0;i<5;i++){
        sol+=A[i]*B[(5-i)%5];
    }
    cout<<sol;
}