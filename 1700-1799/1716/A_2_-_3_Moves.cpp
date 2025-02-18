#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"2\n";
        }
        else if(n==2){
            cout<<"1\n";
        }
        else if(n%3==0){
            cout<<n/3<<"\n";
        }
        else if(n%3==2){
            cout<<1+(n-2)/3<<"\n";
        }
        else if(n==4){
            cout<<"2\n";
        }
        else{
            cout<<2+(n-4)/3<<"\n";
        }
    }
}