#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A=0,B=0;
        while(n--){
            int x;
            cin>>x;
            A=max(A,x);
        }
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            B=max(B,x);
        }
        if(A==B)cout<<"Alice\nBob\n";
        else if(A>B)cout<<"Alice\nAlice\n";
        else cout<<"Bob\nBob\n";
    }
}