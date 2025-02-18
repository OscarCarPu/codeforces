#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    string s;
    cin>>k>>s;
    int sum=0;
    for(char e : s){
        sum+=(e-'0');
    }
    sort(s.begin(),s.end());
    int cnt=0;
    for(char e : s){
        if(sum>=k)break;
        sum-=(e-'0');
        sum+=9;
        cnt++;
    }
    cout<<cnt;
}