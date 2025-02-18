#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==1 and b>2){
            cout<<"-1\n";
            continue;
        }
        if(b==1 and a>2){
            cout<<"-1\n";
            continue;
        }
        if(a==1 and b==1){
            cout<<"0\n";
            continue;
        }
        int sol=a-1+b-1;
        sol+=2*(abs(a-b)/2);
        cout<<sol<<"\n";
    }
}