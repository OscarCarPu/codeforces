#include <bits/stdc++.h>
using namespace std;
bool f(pair<int,int> a,pair<int,int> b){
    return a.first<b.first;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>> V(n);
    for(int i=0;i<n;i++){
        cin>>V[i].first;
        V[i].second=i+1;
    }
    sort(V.rbegin(),V.rend(),f);
    if(n==1)cout<<"-1";
        else if(n==2 and V[0].first==V[1].first)cout<<"-1";
        else{
            cout<<n-1<<"\n";
            for(int i=0;i<n-1;i++)cout<<V[i].second<<" ";
        }
}