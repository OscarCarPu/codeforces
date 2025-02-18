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
    int n;
    cin>>n;
    vi V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    int sol=0;
    for(int i=1;i<n-1;i++){
        if((V[i]>V[i-1] and V[i]>V[i+1]) or (V[i]<V[i-1] and V[i]<V[i+1]))sol++;
    }
    cout<<sol;
}