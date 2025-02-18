#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2,sol;
    cin>>s1>>s2;
    sol.push_back(s1[0]);
    for(int i=1;i<s1.length();i++){
        if(s1[i]>=s2[0]){
            sol.push_back(s2[0]);
            cout<<sol;
            return 0;
        }
        sol.push_back(s1[i]);
    }
    sol.push_back(s2[0]);
    cout<<sol;
}