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
    if(n%10>5){
        n-=n%10;
        n+=10;
    }
    else{
        n-=n%10;
    }
    cout<<n;
}