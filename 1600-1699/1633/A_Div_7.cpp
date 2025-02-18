#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%7==0)cout<<n<<"\n";
        else{
            if((7-n%7)+n%10<10){
                cout<<n+(7-(n%7))<<"\n";
            }
            else{
                cout<<n-n%7<<"\n";
            }
        }
    }
}