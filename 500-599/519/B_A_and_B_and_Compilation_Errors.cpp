#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    multiset<int> S1,S2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        S1.insert(x);
    }
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        S1.erase(S1.find(x));
        S2.insert(x);
    }
    for(int i=2;i<n;i++){
        int x;
        cin>>x;
        S2.erase(S2.find(x));
    }
    cout<<*S1.begin()<<"\n"<<*S2.begin()<<"\n";
}