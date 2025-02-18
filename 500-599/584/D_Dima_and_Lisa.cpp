#include <bits/stdc++.h>
using namespace std;
#define int long long
bool is_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n==3){
        cout<<"1\n3";
        return 0;
    }
    if(n==5){
        cout<<"2\n2 3";
        return 0;
    }
    cout<<"3\n3 ";
    n-=3;
    for(int i=2;i<n-1;i++){
        if(is_prime(n-i) and is_prime(i)){
            cout<<i<<" "<<n-i;
            return 0;
        }
    }
}