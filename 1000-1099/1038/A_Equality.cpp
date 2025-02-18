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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vi cont(k,0);
    for(int i=0;i<n;i++){
        cont[s[i]-'A']++;
    }
    cout<<*min_element(cont.begin(),cont.end())*k;
}