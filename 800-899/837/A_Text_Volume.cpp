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
    int sol=0;
    string s;
    getline(cin,s);
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            sol=max(sol,cont);
            cont=0;
        }
        else{
            if(s[i]<94)cont++;
        }
    }
    sol=max(sol,cont);
    cout<<sol;
}