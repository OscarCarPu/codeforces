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
        int sol=0;
        while(n--){
            int x;
            cin>>x;
            sol=(sol|x);
        }
        cout<<sol<<"\n";
    }
}