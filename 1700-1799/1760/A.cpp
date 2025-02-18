#include <bits/stdc++.h>

using namespace std;

#define int long long
#define vi vector<int>

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b)swap(a,b);
        if(a<c)swap(a,c);
        if(b<c)swap(b,c);
        cout<<b<<"\n";
    }
}