#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin>>n;
        cout<<(n+2)/2<<"\n";
        int a=1;
        while(a<=(n+2)/2){
            cout<<a<<" 1\n";
            a++;
        }
        a--;
        int b=2;
        while(b<=(n+2)/2){
            if(n%2==0 and b==(n+2)/2)break;
            cout<<a<<" "<<b<<"\n";
            b++;
        }
}