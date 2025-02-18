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
    if(n<0){
        n*=-1;
        int l=n%10;
        int al=(n/10)%10;
        n/=100;
        n*=10;
        if(l<al){
            n+=l;
        }
        else{
            n+=al;
        }
        n*=-1;
    }
    cout<<n;
}