
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
    int l,r,a,sol=0;
    cin>>l>>r>>a;
    if(l<r){
        r-=l;
        sol+=l*2;
        l=0;
        sol+=min(r,a)*2;
        int x=min(r,a);
        r-=x;
        a-=x;
        sol+=(a/2)*2;
    }
    else{
        l-=r;
        sol+=r*2;
        r=0;
        sol+=min(l,a)*2;
        int x=min(l,a);
        l-=x;
        a-=x;
        sol+=(a/2)*2;
    }
    cout<<sol;

}