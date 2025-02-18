#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int w,h,n;
        cin >> w >> h >> n;
        int sol=1;
        while(w%2==0){
            w/=2;
            sol*=2;
        }
        while(h%2==0){
            h/=2;
            sol*=2;
        }
        if(sol>=n){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
    }
    return 0;
}