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
    string s;
    cin>>s;
    int n=s.length();
    int aux=n;
    if(n%2==0){
        n/=2;
        n--;
    }
    else{
        n/=2;
    }
    string sol;
    sol.push_back(s[n]);
    for(int i=1;i<aux;i++){
        if(n+i<aux){
            sol.push_back(s[n+i]);
        }
        if(n-i>=0){
            sol.push_back(s[n-i]);
        }
    }
    cout<<sol;
}