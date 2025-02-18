#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> N={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i:N){
        if(n%i==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}