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
    int w,h,u1,d1,u2,d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    while(h){
        w+=h;
        if(h==d1)w-=u1;
        if(h==d2)w-=u2;
        if(w<0)w=0;
        h--;
    }
    cout<<w;
}