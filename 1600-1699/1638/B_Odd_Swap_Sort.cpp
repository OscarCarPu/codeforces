#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
bool can=true;
vi merge(vi a, vi b){
    vi sol;
    int p1=0,p2=0;
    bool odd=false,even=false;
    while(p1<a.size() and p2<b.size()){
        if(a[p1]<=b[p2]){
            if((a[p1]%2 and odd) or (a[p1]%2==0 and even))can=false;
            sol.push_back(a[p1++]);
        }
        else{
            if(b[p2]%2)odd=true;
            else even=true;
            sol.push_back(b[p2++]);
        }
    }
    while(p1<a.size()){
        if((a[p1]%2 and odd) or (a[p1]%2==0 and even))can=false;
        sol.push_back(a[p1++]);
    }
    while(p2<b.size()){
        sol.push_back(b[p2++]);
    }
    return sol;
}
vi mergesort(vi a){
    if(a.size()==1)return a;
    vi b;
    int n=a.size();
    while(a.size()>n/2){
        b.push_back(a[a.size()-1]);
        a.pop_back();
    }
    reverse(b.begin(),b.end());
    return merge(mergesort(a),mergesort(b));
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        can=true;
        cin>>n;
        vector<int> V(n);
        for(int i=0;i<n;i++)cin>>V[i];
        V=mergesort(V);
        if(can)cout<<"Yes\n";
        else cout<<"No\n";
    }
}