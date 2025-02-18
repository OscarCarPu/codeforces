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
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<max(abs(x1-x2),abs(y1-y2));
}