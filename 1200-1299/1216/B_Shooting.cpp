#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vpi a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.rbegin(), a.rend());
    int cost=0;
    for(int i=0;i<n;i++){
        cost+=a[i].first*i+1;
    }
    cout<<cost<<"\n";
    for(int i=0;i<n; i++){
        cout<<a[i].second<<" ";
    }

}