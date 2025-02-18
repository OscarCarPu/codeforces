#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int n=s.length();
    vector<int> sum(n,0);
    for(int i=1;i<n;i++){
        sum[i]+=sum[i-1];
        if(s[i]==s[i-1])sum[i]++;
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        cout<<sum[r]-sum[l]<<"\n";
    }
}