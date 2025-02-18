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
    int cont=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(char e : s){
        if(e=='8')cont++;
    }
    cout<<min(cont,n/11);
}