#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        n-=2;
        if(n<0){
            cout<<"1\n";
            continue;
        }
        int a=n%x;
        n/=x;
        if(a==0)n--;
        cout<<n+2<<"\n";
    }
    return 0;
}