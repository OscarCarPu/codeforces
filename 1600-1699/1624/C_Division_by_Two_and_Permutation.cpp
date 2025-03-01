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
        vector<int>a(n);
        vector<bool>used(n+1,false);
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end(), [] (int a, int b) {
            return a > b;
        });
        bool ok = true;
        for(auto &i : a){
            int x = i;
            while(x > n or used[x])  x /= 2;
            if(x > 0) used[x] = true;
            else ok = false;
        }
        cout << (ok ? "YES" : "NO") << '\n';

    }
}