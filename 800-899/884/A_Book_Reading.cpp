#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    cin>>n>>t;
    int d=0;
    while(t>0){
        int x;
        cin>>x;
        t-=(86400-x);
        d++;
    }
    cout<<d;
}