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
    vector<string> N={"O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-","-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};
    if(n==0)cout<<N[0];
    while(n>0){
        cout<<N[n%10];
        n/=10;
        cout<<"\n";
    }
}