#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> num;
    for(int i=1;i*i*i<=1e12;i++){
        num.push_back(i*i*i);
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a=0,b=num.size()-1;
        while(true){
            if(b<a)break;
            if(num[a]+num[b]>x)b--;
            if(num[a]+num[b]<x)a++;
            if(num[a]+num[b]==x)break;
        }
        if(b<a)cout<<"NO\n";
        else cout<<"YES\n";
    }
}